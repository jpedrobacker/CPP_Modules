/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:28:36 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 22:04:16 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap with a name is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	std::cout << "Copy ClapTrap created" << std::endl;
	*this = c;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap: " << _name << " Destroyed" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clap)
{
	if (this != &clap)
	{
		_name = clap._name;
		_hitPoints = clap._hitPoints;
		_energyPoints = clap._energyPoints;
		_attackDamage = clap._attackDamage;
		std::cout << "Called copy assignment ClapTrap" << std::endl;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
	{
		std::cout << "Attack failed, not enough energy!" << std::endl;
		return ;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << "Attack failed, " << this->_name << " is down!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "Claptrap: " << _name << " attacks " << target << ", causing " << _attackDamage << " Damage!" << std::endl;
}

void	ClapTrap::takeDamage(int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "Claptrap: " << _name << " is already down!" << std::endl;
		return ;
	}
	if (this->_hitPoints <= amount)
	{
		_hitPoints = 0;
		std::cout << "Claptrap: " << _name << " takes " << amount << ", he's down!" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	std::cout << "Claptrap: " << _name << " takes " << amount << " damage!" << std::endl;
}

void	ClapTrap::beRepaired(int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "Claptrap: " << _name << " is down, can't be repaired!" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "Claptrap: " << _name << " is out of energy, can't be repaired!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	std::cout << "Claptrap: " << _name << " is repaired for " << amount << " hitpoints!" << std::endl;
	_energyPoints--;
}

std::string	ClapTrap::getName() const
{
	return (_name);
}

int	ClapTrap::getHitPoints() const
{
	return (_hitPoints);
}

int	ClapTrap::getEnergyPoints() const
{
	return (_energyPoints);
}

int	ClapTrap::getAttackDamage() const
{
	return (_attackDamage);
}
