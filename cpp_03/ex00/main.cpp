/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:46:50 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 21:55:43 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	// Initialization Tests
	ClapTrap clap1("clap1");
	ClapTrap clap2("clap2");
	ClapTrap clap3("clap3");
	ClapTrap clap4(clap1); // Copy constructor

	// Output initial states
	std::cout << "Initial States:" << std::endl;
	std::cout << "clap1's name: " << clap1.getName() << ", hitpoints: " << clap1.getHitPoints() << std::endl;
	std::cout << "clap2's name: " << clap2.getName() << ", hitpoints: " << clap2.getHitPoints() << std::endl;
	std::cout << "clap3's name: " << clap3.getName() << ", hitpoints: " << clap3.getHitPoints() << std::endl;
	std::cout << "clap4's name: " << clap4.getName() << ", hitpoints: " << clap4.getHitPoints() << std::endl;
	std::cout << std::endl;

	// Action Tests
	clap1.attack("clap2");
	clap2.takeDamage(4);
	clap2.attack("clap1");
	clap1.takeDamage(1);
	clap2.beRepaired(1);
	clap4.attack("clap3");
	clap3.takeDamage(15);

	// Output states after actions
	std::cout << "After Actions:" << std::endl;
	std::cout << "clap1's hitpoints: " << clap1.getHitPoints() << std::endl;
	std::cout << "clap2's hitpoints: " << clap2.getHitPoints() << std::endl;
	std::cout << "clap3's hitpoints: " << clap3.getHitPoints() << std::endl;
	std::cout << "clap4's hitpoints: " << clap4.getHitPoints() << std::endl;
	std::cout << std::endl;

	// Edge Case Tests
	clap3.takeDamage(100); // Overkill damage
	clap3.beRepaired(50);  // Repair after overkill
	clap2.beRepaired(0);   // Repair with zero amount
	clap1.attack("clap3"); // Attack a heavily damaged ClapTrap

	// Output states after edge cases
	std::cout << "After Edge Cases:" << std::endl;
	std::cout << "clap1's hitpoints: " << clap1.getHitPoints() << std::endl;
	std::cout << "clap2's hitpoints: " << clap2.getHitPoints() << std::endl;
	std::cout << "clap3's hitpoints: " << clap3.getHitPoints() << std::endl;
	std::cout << "clap4's hitpoints: " << clap4.getHitPoints() << std::endl;
	std::cout << std::endl;

	return 0;
}
