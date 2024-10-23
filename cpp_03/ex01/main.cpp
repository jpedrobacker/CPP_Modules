/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:47:42 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 22:18:11 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void printStatus(const ClapTrap &ct)
{
	std::cout << ct.getName() << " - Hitpoints: " << ct.getHitPoints();
	std::cout << ", Energy: " << ct.getEnergyPoints() << std::endl;
}

int main(void)
{
	ClapTrap ct("Clap");
	ScavTrap st1("Scav");
	ScavTrap st2("Scav2");

	// Initial status
	printStatus(ct);
	printStatus(st1);
	printStatus(st2);

	// Test attacks
	ct.attack("Scav");
	st1.takeDamage(ct.getAttackDamage());
	printStatus(st1);

	st1.attack("Clap");
	ct.takeDamage(st1.getAttackDamage());
	printStatus(ct);

	st2.attack("Scav");
	st1.takeDamage(st2.getAttackDamage());
	printStatus(st1);

	// Test repairs
	ct.beRepaired(3);
	st1.beRepaired(3);
	printStatus(ct);
	printStatus(st1);

	// Edge cases
	ct.attack("Scav"); // Attack with remaining energy
	ct.attack("Scav"); // Attack with zero energy
	printStatus(ct);

	st1.beRepaired(100); // Over-repair
	printStatus(st1);

	// Final status
	printStatus(ct);
	printStatus(st1);
	printStatus(st2);

	return (0);
}
