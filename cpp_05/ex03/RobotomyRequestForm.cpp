/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:04:02 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/12 15:45:40 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Form Destroyed!!!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 25, 5), _target("Default")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy", 25, 5), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src)
{}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
		AForm::operator=(src);
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor);
	std::cout << "Brrrrrrrrrr" << std::endl;
	if (rand() % 2)
		std::cout << _target << " robotomization success!" << std::endl;
	else
		std::cout << "Robotomy failed on " << _target << "!" << std::endl;
}
