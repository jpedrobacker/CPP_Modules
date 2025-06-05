/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:58:29 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/03 11:13:33 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	int intinput;
	std::string sinput;
	int form_choice;

	try
	{
		std::cout << "What's your name?: ";
		std::cin >> sinput;
		std::cout << "What's your last grade?: ";
		std::cin >> intinput;
		Bureaucrat *n_b = new Bureaucrat(sinput, intinput);

		std::cout << "Choose a form to create:\n";
		std::cout << "1. Presidential Pardon Form\n";
		std::cout << "2. Robotomy Request Form\n";
		std::cout << "3. Shrubbery Creation Form\n";
		std::cout << "Enter your choice (1-3): ";
		std::cin >> form_choice;
		Intern intern;
		AForm *n_form = NULL;
		switch (form_choice)
		{
			case(1):
				n_form = intern.makeForm("presidential form", sinput);
				break;
			case(2):
				n_form = intern.makeForm("robotomy request", sinput);
				break;
			case(3):
				n_form = intern.makeForm("shrubbery creation", sinput);
				break;
			default:
				std::cout << "invalid choice" << std::endl;
		}
		std::cout << "grade: " << n_b->getGrade() << std::endl;
		n_b->signForm(*n_form);
		n_form->execute(*n_b);

		delete n_form;
		delete n_b;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
