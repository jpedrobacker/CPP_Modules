/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:04:05 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/12 15:45:53 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMUYREQUESTFORM_HPP
# define ROBOTOMUYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		const std::string _target;

	public:
		~RobotomyRequestForm();
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);

		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

		void	execute(const Bureaucrat &executor) const;
};

#endif
