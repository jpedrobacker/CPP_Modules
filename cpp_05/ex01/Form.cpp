/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:51:32 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/20 13:26:57 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form()
{
	//std::cout << "Form Destroyed" << std::endl;
}

Form::Form() : _name("Default"), _signed(false), _gradeToSign(50), _gradeToExecute(50)
{
	//std::cout << "Default constructor Form created" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExec)
{
	this->_signed = false;
	if (gradeToSign < 1 || gradeToExec < 1)
		throw (Form::GradeTooHighException());
	if (gradeToSign > 150 || gradeToExec > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	*this = src;
}

Form	&Form::operator=(const Form &src)
{
	if (this != &src)
		this->_signed = src.getSigned();
	return (*this);
}

void	Form::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() <= this->getGradeToSign())
		this->_signed = true;
	else
		throw (Form::GradeTooLowException());
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade is to high!!!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade is too low!!!");
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << form.getName() << " has the following attibutes: " << form.getSigned() << " "
	<< form.getGradeToExecute() << " "
	<< form.getGradeToSign() << std::endl;
	return os;
}
