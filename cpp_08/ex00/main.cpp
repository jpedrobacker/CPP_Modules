/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:44:03 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/24 08:46:30 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	bool found;
	std::vector<int> vec;

	vec.push_back(368);
	vec.push_back(42);
	vec.push_back(143);

	std::cout << "\n=== Testando vector ===" << std::endl;
	std::cout << "Procurando 143" << std::endl;
	found = easyFind(vec, 143);
	std::cout << "Retorno da função: " << (found ? "true" : "false") << std::endl;
	found = NULL;

	std::cout << "\n=======================" << std::endl;
	std::cout << "Procurando 42" << std::endl;
	found = easyFind(vec, 42);
	std::cout << "Retorno da função: " << (found ? "true" : "false") << std::endl;
	found = NULL;

	std::cout << "\n=======================" << std::endl;
	std::cout << "Procurando 84" << std::endl;
	found = easyFind(vec, 84);
	std::cout << "Retorno da função: " << (found ? "true" : "false") << std::endl;

	return (0);
}
