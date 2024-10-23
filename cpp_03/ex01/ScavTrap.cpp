/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:28:45 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 22:25:40 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called!" << std::endl;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &ct) : ClapTrap(ct)
{
	std::cout << "ScavTrap copy constructor called!" << std::endl;
	*this = ct;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &ct)
{
	std::cout << "ScavTrap assignation operator called!" << std::endl;
	this->_name = ct.getName();
	this->_hitPoints = ct.getHitPoints();
	this->_energyPoints = ct.getEnergyPoints();
	this->_attackDamage = ct.getAttackDamage();
	return (*this);
}

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy points left!" << std::endl;
		return ;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
