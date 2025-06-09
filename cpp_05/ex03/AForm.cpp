/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:51:32 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/20 13:44:44 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm()
{
	//std::cout << "AForm Destroyed" << std::endl;
}

AForm::AForm() : _name("Default"), _signed(false), _gradeToSign(50), _gradeToExecute(50)
{
	//std::cout << "Default constructor AForm created" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExec)
{
	this->_signed = false;
	if (gradeToSign < 1 || gradeToExec < 1)
	throw (AForm::GradeTooHighException());
	if (gradeToSign > 150 || gradeToExec > 150)
	throw (AForm::GradeTooLowException());
}

AForm::AForm(const AForm &src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	*this = src;
}

AForm	&AForm::operator=(const AForm &src)
{
	if (this != &src)
		this->_signed = src.getSigned();
	return (*this);
}

void	AForm::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() <= this->getGradeToSign())
		this->_signed = true;
	else
	{
		std::cout << "To Sign ";
		throw (AForm::GradeTooLowException());
	}
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		std::cout << "To Execute ";
		throw (AForm::GradeTooLowException());
	}
	if (!this->getSigned())
		throw (AForm::SignedAlready());
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("AForm Grade is to high!!!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("AForm Grade is too low!!!");
}

const char *AForm::SignedAlready::what() const throw()
{
	return ("AForm Already Signed!!!");
}

std::ostream &operator<<(std::ostream &os, AForm const &form)
{
	os << form.getName() << " has the following attibutes: " << form.getSigned() << " "
	<< form.getGradeToExecute() << " "
	<< form.getGradeToSign() << std::endl;
	return os;
}
