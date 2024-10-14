/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:09:25 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/14 13:53:40 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *nZombie = Zombie::newZombie("Ain");

	nZombie->announce();
	Zombie::randomChump("AIIIIIINNNN");

	delete nZombie;
	return (0);
}
