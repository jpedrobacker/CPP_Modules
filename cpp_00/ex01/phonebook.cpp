/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:55:00 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/07 15:18:38 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->num_contacts = 0;
}

PhoneBook::~PhoneBook() {}


void	Contact::create_contact(void)
{
	std::cout << "Enter contact name: ";
	std::cin >> this->name;
	std::cout << "Enter contact last name: ";
	std::cin >> this->last_name;
	std::cout << "Enter a nickname for the contact: ";
	std::cin >> this->nickname;
	std::cout << "Enter contact Phone number: ";
	std::cin >> this->phone_num;
	std::cout << "Enter contact darkest secret: ";
	std::cin >> this->darkest_secret;
}

void	PhoneBook::add_num(void)
{
	if (this->index == 8)
		this->index = 0;
	if (this->index < 8)
	{
		this->contact[this->index].create_contact();
		this->index++;
	}
}

void	PhoneBook::search_num(void)
{
	std::cout << "TEST SEARCH" << std::endl;
}
