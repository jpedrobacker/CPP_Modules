/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:28:49 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 22:27:06 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		~ScavTrap();
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &st);
		ScavTrap	&operator=(ScavTrap const &st);
		void		guardGate() const;
		void		attack(std::string const &target);
};

#endif
