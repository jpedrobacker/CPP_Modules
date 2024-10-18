/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:36:55 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/18 01:00:26 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	this->_type = weaponType;
}

Weapon::~Weapon()
{}

std::string&	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type);
{
	this->_type = type;
}
