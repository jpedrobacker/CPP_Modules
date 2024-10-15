/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:09:25 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/15 13:59:05 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *nZombie = Zombie::newZombie("Joao");

	nZombie->announce();
	Zombie::randomChump("Pedro");

	delete nZombie;
	return (0);
}
