/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:55:00 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/01 18:50:36 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::add_num()
{
	std::cout << "TEST ADD" << std::endl ;
}

void	PhoneBook::search_num()
{
	std::cout << "TEST SEARCH" << std::endl;
}

int main(void)
{
	PhoneBook	book;
	std::string	input;

	while (1)
	{
		std::cout << "What to do?: ";
		std::cin >> input;

		if (input == "EXIT")
			break;
		else if (input == "ADD")
			book.add_num();
		else if (input == "SEARCH")
			book.search_num();
	}
	return (0);
}
