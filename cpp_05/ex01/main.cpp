/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:58:29 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/08 18:46:56 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		Bureaucrat	*n_b = new Bureaucrat(sinput, intinput);
		Form		n_form("new Form", 40, 30);

		std::cout << "grade: " << n_b->getGrade() << std::endl;
		n_b->decrementGrade(5);

		n_b->signForm(n_form);
		delete n_b;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
