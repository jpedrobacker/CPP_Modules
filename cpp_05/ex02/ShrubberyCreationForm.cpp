/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:04:07 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/20 13:32:24 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "Shrubbery Form Destroyed!!!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137), _target("Default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src)
{}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
		AForm::operator=(src);
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor);
	std::string		nFileName = _target + "_shrubbery";
	std::ofstream	nFile(nFileName.c_str(), std::ofstream::out);

	if (!nFile.is_open())
	{
		std::cerr << "Failed to open file: " << nFileName << std::endl;
		return ;
	}
	int i = -1;
	while (++i < 10)
	{
		for (int j = 0; j < 10 - i - 1; ++j)
			nFile << " ";
		for (int j = 0; j < 2 * i + 1; ++j)
			nFile << "*";
		nFile << std::endl;
	}
	nFile.close();
}
