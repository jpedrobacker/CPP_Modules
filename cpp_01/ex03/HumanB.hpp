/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:39:33 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/18 00:52:36 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include <iostream>
#include "Weapon.cpp"

class HumanB
{
	private:
		std::string	_name;
		std::string	_weapon;

	public:
		HumanB(std::string name, Weapon &weaponType);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon nwp);
};


#endif
