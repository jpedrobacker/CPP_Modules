/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:09:39 by jbergfel          #+#    #+#             */
/*   Updated: 2024/11/27 11:21:04 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		static Zombie*	newZombie(std::string name);
		static void		randomChump(std::string name);
		void			announce(void) const;
};

#endif
