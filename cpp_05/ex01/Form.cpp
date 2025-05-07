/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:51:32 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/07 13:33:02 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form()
{
	std::cout << "Form Destroyed" << std::endl;
}

Form::Form() : _name("Default"), _signed(false), _gradeToSign(50), _gradeToExecute(50)
{
	std::cout << "Default constructor Form created" << std::endl;
}

void	Form::beSigned(Bureaucrat &src)
{
	
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade setted is too high!!!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade setted is too low!!!");
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned()
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
