/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:51:29 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/12 13:51:36 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		~AForm();
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExec);
		AForm(const AForm &src);
		AForm	&operator=(const AForm &src);

		void	beSigned(const Bureaucrat &src);
		virtual void	execute(const Bureaucrat &src) const;

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
		class SignedAlready : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, AForm const &rhs);

#endif
