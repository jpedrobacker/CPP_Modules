/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:39:01 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/18 00:52:39 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		std::string	_weapon;

	public:
		HumanA(std::string name, Weapon &weaponType);
		~HumanA();
		void	attack() const;
		void	setWeapon(Weapon nwp);

};


#endif
