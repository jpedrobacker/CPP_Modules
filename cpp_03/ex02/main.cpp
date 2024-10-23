/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:47:42 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 22:31:52 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void printStatus(const ClapTrap &ct)
{
	std::cout << ct.getName() << " - Hitpoints: " << ct.getHitPoints();
	std::cout << ", Energy: " << ct.getEnergyPoints() << std::endl;
}

int main(void)
{
	ClapTrap ct("Clap");
	ScavTrap st("Scav");
	FragTrap ft("Frag");

	std::cout << "Initial Status:" << std::endl;
	printStatus(ct);
	printStatus(st);
	printStatus(ft);
	std::cout << std::endl;

	std::cout << "Combat Simulation:" << std::endl;
	ct.attack("Scav");
	st.takeDamage(ct.getAttackDamage());
	printStatus(st);

	st.attack("Clap");
	ct.takeDamage(st.getAttackDamage());
	printStatus(ct);

	ft.attack("Scav");
	st.takeDamage(ft.getAttackDamage());
	printStatus(st);

	ct.beRepaired(3);
	printStatus(ct);

	st.beRepaired(3);
	printStatus(st);

	std::cout << std::endl;

	std::cout << "Edge Cases:" << std::endl;
	ct.takeDamage(100); // Exceeding hit points
	printStatus(ct);

	st.takeDamage(100); // Exceeding hit points
	printStatus(st);

	ft.takeDamage(100); // Exceeding hit points
	printStatus(ft);

	ct.beRepaired(100); // Repairing from zero hit points
	printStatus(ct);

	st.beRepaired(100); // Repairing from zero hit points
	printStatus(st);

	ft.beRepaired(100); // Repairing from zero hit points
	printStatus(ft);

	std::cout << std::endl;

	std::cout << "Energy Depletion:" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		ct.attack("Scav");
		st.attack("Clap");
		ft.attack("Scav");
	}
	printStatus(ct);
	printStatus(st);
	printStatus(ft);

	return (0);
}
