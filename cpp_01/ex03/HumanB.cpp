/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:39:30 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/21 09:58:33 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB()
{}

void	HumanB::attack()
{
	if (!_weapon)
	{
		std::cout << _name << " has no weapon!" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " + _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &nwp)
{
	_weapon = &nwp;
}
