/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:58:42 by jbergfel          #+#    #+#             */
/*   Updated: 2025/04/28 09:43:35 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: " << this->_name << " destroyed!" << std::endl;
}

Bureaucrat::Bureaucrat() : _name("Default"), _grade(50)
{
	std::cout << "Default Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();

	this->_grade = grade;
	std::cout << "Bureaucrat: " << name << " created!" << std::endl;
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << "Bureaucrat: " << this->_name << " altered grade to: " << this->_grade << std::endl;
}

std::string	Bureaucrat::getName()
{
	return this->_name;
}

int	Bureaucrat::getGrade()
{
	return this->_grade;
}
