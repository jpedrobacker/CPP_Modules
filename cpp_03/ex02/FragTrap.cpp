/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:42:07 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 22:35:13 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &ft) : ClapTrap(ft)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = ft;
}

FragTrap	&FragTrap::operator=(const FragTrap &ft)
{
	if (this != &ft)
	{
		this->_name = ft._name;
		this->_hitPoints = ft._hitPoints;
		this->_energyPoints = ft._energyPoints;
		this->_attackDamage = ft._attackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is asking for a high five" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy points left!" << std::endl;
		return ;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no hit points left!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}
