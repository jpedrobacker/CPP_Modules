/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:54:33 by jbergfel          #+#    #+#             */
/*   Updated: 2024/12/05 11:22:20 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	n = 5;
	Zombie	*zombieHorde = Zombie::zombieHorde(n, "Joao");

	for (int i = 0; i < n; i++)
		zombieHorde[i].announce();

	std::cout << std::endl;

	zombieHorde[1].setName("Pedro");
	zombieHorde[2].setName("Bergfeld");
	zombieHorde[3].setName("Backer");
	zombieHorde[4].setName("Lopes");


	for (int i = 0; i < n; i++)
		zombieHorde[i].announce();

	std::cout << std::endl;

	delete [] zombieHorde;
	return (0);
}
