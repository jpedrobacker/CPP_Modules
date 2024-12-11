/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:42:22 by jbergfel          #+#    #+#             */
/*   Updated: 2024/12/05 12:26:21 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	harl;

	std::cout << std::endl;
	std::cout << "-------DEBUG-------" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "-------INFO-------" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	std::cout << "-------WARNING-------" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << "-------ERROR-------" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	return (0);
}
