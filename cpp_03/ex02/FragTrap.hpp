/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:42:24 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 21:51:08 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		~FragTrap();
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &ft);
		FragTrap	&operator=(const FragTrap &ft);
		void		highFivesGuys(void);
		void		attack(const std::string &target);
};

#endif
