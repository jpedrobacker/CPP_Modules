/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:39:11 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/21 10:00:06 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &nw) : _name(name), _weapon(nw)
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " + _weapon.getType() << std::endl;
}

