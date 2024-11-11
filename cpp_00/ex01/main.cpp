/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:49:34 by jbergfel          #+#    #+#             */
/*   Updated: 2024/11/11 10:19:11 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::showInstructions(void)
{
	std::cout << "Enter yout command [ADD, SEARCH, PRINT, EXIT]: ";
}

int main(void)
{
	PhoneBook	book;
	std::string	input;

	while (1)
	{
		book.showInstructions();
		std::cin >> input;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			book.addContact();
		else if (input == "SEARCH")
			book.searchContact();
		else if (input == "PRINT")
			book.printContacts();
	}
	return (0);
}
