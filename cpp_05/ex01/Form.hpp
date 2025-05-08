/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:51:29 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/08 18:41:39 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		~Form();
		Form();
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(const Form &src);
		Form	&operator=(const Form &src);

		void	beSigned(Bureaucrat &src);

		std::string	getName() const;
		bool		getSigned() const;
		int	getGradeToSign() const;
		int	getGradeToExecute() const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, Form const &rhs);

#endif
