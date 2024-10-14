/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:09:34 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/14 13:47:31 by jbergfel         ###   ########.fr       */
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
