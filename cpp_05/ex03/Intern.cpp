/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:03:54 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/03 11:00:17 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::~Intern()
{}

Intern::Intern()
{}

AForm	*Intern::makeForm(std::string formName, std::string targetForm)
{
	AForm		*form;
	std::string	forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int	formNum;

	while (formNum < 3 && !formName.compare(forms[formNum]))
		formNum++;
	switch (formNum)
	{
	case (0):
		form = new PresidentialPardonForm(targetForm);
		break;
	case (1):
		form = new RobotomyRequestForm(targetForm);
		break;
	case (2):
		form = new ShrubberyCreationForm(targetForm);
		break;
	default:
		std::cout << "Intern failed to create a new form of name: " << formName << std::endl;
		break;
	}
	std::cout << "Intern creates form: " << formName << std::endl;
	return (form);
}
