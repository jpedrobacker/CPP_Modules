/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:52:08 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/18 00:18:20 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << this->_name + " destroyed" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": Braiiiiiiinnnzzz" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
