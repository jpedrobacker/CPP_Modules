/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:55:00 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/09 11:41:55 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->num_contacts = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::print_contacts(void)
{
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "| index | first name | last  name |  nickname  |  phone num |" << std::endl;
	std::cout << "|-----------------------------------------------------------|" << std::endl;
	for (int i = 0; i < this->num_contacts; i++)
	{
		std::cout << "|   " << i + 1 << "   | ";
		if (this->contact[i].get_first_name().length() > 10)
			std::cout << this->contact[i].get_first_name().substr(0, 9) << "." << " | ";
		else
			std::cout << std::setw(10) << this->contact[i].get_first_name() << " | ";
		if (this->contact[i].get_last_name().length() > 10)
			std::cout << this->contact[i].get_last_name().substr(0, 9) << "." << " | ";
		else
			std::cout << std::setw(10) << this->contact[i].get_last_name() << " | ";
		if (this->contact[i].get_nickname().length() > 10)
			std::cout << this->contact[i].get_nickname().substr(0, 9) << "." << " | ";
		else
			std::cout << std::setw(10) << this->contact[i].get_nickname() << " | ";
		if (this->contact[i].get_phone_num().length() > 10)
			std::cout << this->contact[i].get_phone_num().substr(0, 9) << "." << " |";
		else
			std::cout << std::setw(10) << this->contact[i].get_phone_num() << " |";
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
}

void PhoneBook::create_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_num;
	std::string darkest_secret;

	std::cout << "Enter contact first name: ";
	std::cin >> first_name;
	this->contact[this->index].set_first_name(first_name);
	std::cout << "Enter contact last name: ";
	std::cin >> last_name;
	this->contact[this->index].set_last_name(last_name);
	std::cout << "Enter a nickname for the contact: ";
	std::cin >> nickname;
	this->contact[this->index].set_nickname(nickname);
	std::cout << "Enter contact Phone number: ";
	std::cin >> phone_num;
	this->contact[this->index].set_phone_num(phone_num);
	std::cout << "Enter contact darkest secret: ";
	std::cin >> darkest_secret;
	this->contact[this->index].set_darkest_secret(darkest_secret);
}

void	PhoneBook::add_contact(void)
{
	if (this->index == 8)
		this->index = 0;
	if (this->index < 8)
	{
		this->create_contact();
		this->index++;
	}
	if (this->num_contacts < 8)
		this->num_contacts++;
}

void	PhoneBook::search_contact(void)
{
	std::string	to_find_index;

	std::cout << "Enter contact to search: ";
	std::cin >> to_find_index;
	int	f_index = atoi(to_find_index.c_str());

	for (int x = 0; x <= this->num_contacts; ++x)
	{
		if (x == f_index - 1)
		{
			std::cout << "-------------------------------------------------------------" << std::endl;
			std::cout << "| index | first name | last  name |  nickname  |  phone num |" << std::endl;
			std::cout << "|-----------------------------------------------------------|" << std::endl;
			std::cout << "|   " << x << "   | ";
			if (this->contact[x].get_first_name().length() > 10)
				std::cout << this->contact[x].get_first_name().substr(0, 9) << "." << " | ";
			else
				std::cout << std::setw(10) << this->contact[x].get_first_name() << " | ";
			if (this->contact[x].get_last_name().length() > 10)
				std::cout << this->contact[x].get_last_name().substr(0, 9) << "." << " | ";
			else
				std::cout << std::setw(10) << this->contact[x].get_last_name() << " | ";
			if (this->contact[x].get_nickname().length() > 10)
				std::cout << this->contact[x].get_nickname().substr(0, 9) << "." << " | ";
			else
				std::cout << std::setw(10) << this->contact[x].get_nickname() << " | ";
			if (this->contact[x].get_phone_num().length() > 10)
				std::cout << this->contact[x].get_phone_num().substr(0, 9) << "." << " |";
			else
				std::cout << std::setw(10) << this->contact[x].get_phone_num() << " |";
			std::cout << std::endl;
			std::cout << "-------------------------------------------------------------" << std::endl;
		}

	}
}
