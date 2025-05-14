/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:38:29 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/14 15:58:05 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ignoreF(std::string &literal)
{
	if (literal.length() < 2)
		return ;
	if (literal == "inf" || literal == "+inf" || literal == "-inf")
		return ;
	if (literal.at(literal.length() - 1) == 'f')
		literal = literal.substr(0, literal.length() - 1);
}

void	printFloat(double dl)
{
	if (std::isnan(dl))
	{
		std::cout << "float: nanf" << std::endl;
		return ;
	}
	float converted = static_cast<float>(dl);
	std::cout << "float: " << std::fixed << std::setprecision(1) << converted << "f" << std::endl;
}

void	printInt(double dl)
{
	if (std::isnan(dl))
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	int converted = static_cast<int>(dl);
	std::cout << "int: " << converted << std::endl;
}

void	printChar(double dl)
{
	if (dl < 0 || dl > 127 || std::isnan(dl))
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	else if (dl < 33 || dl > 126)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	char converted = static_cast<char>(dl);
	std::cout << "char: '" << converted << "'" << std::endl;
}

void	ScalarConverter::convert(std::string &literal)
{
	if (literal.length() == 1 && !std::isdigit(literal[0]))
	{
		char c = literal[0];
		int i = static_cast<int>(c);
		float f = static_cast<float>(c);
		double d = static_cast<double>(c);

		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
		return;
	}
	else
	{
		ignoreF(literal);
		char *endptr;
		double dl = std::strtod(literal.c_str(), &endptr);
		if (literal.empty() || *endptr != '\0')
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
		else
		{
			printChar(dl);
			printInt(dl);
			printFloat(dl);
			std::cout << "double: " << std::fixed << std::setprecision(1) << dl << std::endl;
		}
	}
}
