/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:09:25 by jbergfel          #+#    #+#             */
/*   Updated: 2024/11/27 11:21:45 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	tZom = Zombie("Lu");
	tZom.announce();

	Zombie	laZom;
	laZom.announce();

	Zombie	*nZombie = Zombie::newZombie("Joao");

	nZombie->announce();
	Zombie::randomChump("Pedro");

	delete nZombie;
	return (0);
}
