/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:49:34 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/15 14:07:29 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::show_instructions(void)
{
	std::cout << "Enter yout command [ADD, SEARCH, PRINT, EXIT]: ";
}

int main(void)
{
	PhoneBook	book;
	std::string	input;

	while (1)
	{
		book.show_instructions();
		std::cin >> input;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			book.add_contact();
		else if (input == "SEARCH")
			book.search_contact();
		else if (input == "PRINT")
			book.print_contacts();
	}
	return (0);
}
