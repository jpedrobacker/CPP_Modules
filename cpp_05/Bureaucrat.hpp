/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:58:26 by jbergfel          #+#    #+#             */
/*   Updated: 2025/04/28 09:45:18 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;

	public:
		~Bureaucrat();
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);

		void	setGrade(int grade);
		std::string	getName();
		int			getGrade();

		class GradeTooHighException : public std::exception
		{
			public:
		};
		class GradeTooLowException : public std::exception
		{
			public:
		};
};

#endif
