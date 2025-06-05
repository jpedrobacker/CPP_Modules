/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:58:29 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/20 13:24:53 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	int	intinput;
	std::string	sinput;

	try
	{
		std::cout << "What's your name?: ";
		std::cin >> sinput;
		std::cout << "What's your last grade?: ";
		std::cin >> intinput;
		Bureaucrat	n_b(sinput, intinput);

		std::cout << "grade: " << n_b.getGrade() << std::endl;
		n_b.decrementGrade(5);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
