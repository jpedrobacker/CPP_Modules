/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:46:52 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 20:17:55 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints; //life points
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &c);
		void		attack(std::string const &target);
		void		takeDamage(int amount);
		void		beRepaired(int amount);
		ClapTrap	&operator=(const ClapTrap &clap);
		std::string		getName() const;
		int		getHitPoints() const;
		int		getEnergyPoints() const;
		int		getAttackDamage() const;
};

#endif
