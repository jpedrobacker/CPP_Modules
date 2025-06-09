/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:58:42 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/27 11:07:34 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat: " << this->_name << " destroyed!" << std::endl;
}

Bureaucrat::Bureaucrat() : _name("Default"), _grade(50)
{
	//std::cout << "Default Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		setGrade(src.getGrade());
	return (*this);
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());

	this->_grade = grade;
	std::cout << "Bureaucrat: " << name << " created!" << std::endl;
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
	std::cout << "Bureaucrat: " << this->_name << " altered grade to: " << this->_grade << std::endl;
}

void	Bureaucrat::incrementGrade(int increment)
{
	setGrade(this->getGrade() - increment);
}

void	Bureaucrat::decrementGrade(int decrement)
{
	setGrade(this->getGrade() + decrement);
}

void	Bureaucrat::signForm(Form &src)
{
	try
	{
		src.beSigned(*this);
		std::cout << this->getName() << " Signed the form: " << src.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade setted is too high!!!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade setted is too low!!!");
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bur)
{
	os << bur.getName() << " has the following grade: " << bur.getGrade() << std::endl;
	return os;
}
