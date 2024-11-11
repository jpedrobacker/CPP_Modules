/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:55:00 by jbergfel          #+#    #+#             */
/*   Updated: 2024/11/11 10:20:21 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	this->_numContacts = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::printContacts(void)
{
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "| index | first name | last  name |  nickname  |  phone num |" << std::endl;
	std::cout << "|-----------------------------------------------------------|" << std::endl;
	for (int i = 0; i < this->_numContacts; i++)
	{
		std::cout << "|   " << i + 1 << "   | ";
		if (this->_contact[i].getFirstName().length() > 10)
			std::cout << this->_contact[i].getFirstName().substr(0, 9) << "." << " | ";
		else
			std::cout << std::setw(10) << this->_contact[i].getFirstName() << " | ";
		if (this->_contact[i].getLastName().length() > 10)
			std::cout << this->_contact[i].getLastName().substr(0, 9) << "." << " | ";
		else
			std::cout << std::setw(10) << this->_contact[i].getLastName() << " | ";
		if (this->_contact[i].getNickName().length() > 10)
			std::cout << this->_contact[i].getNickName().substr(0, 9) << "." << " | ";
		else
			std::cout << std::setw(10) << this->_contact[i].getNickName() << " | ";
		if (this->_contact[i].getPhoneNum().length() > 10)
			std::cout << this->_contact[i].getPhoneNum().substr(0, 9) << "." << " |";
		else
			std::cout << std::setw(10) << this->_contact[i].getPhoneNum() << " |";
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
}

void PhoneBook::createContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNum;
	std::string darkestSecret;

	std::cout << "Enter contact first name: ";
	std::cin >> firstName;
	this->_contact[this->_index].setFirstName(firstName);
	std::cout << "Enter contact last name: ";
	std::cin >> lastName;
	this->_contact[this->_index].setLastName(lastName);
	std::cout << "Enter a nickname for the contact: ";
	std::cin >> nickName;
	this->_contact[this->_index].setNickName(nickName);
	std::cout << "Enter contact Phone number: ";
	std::cin >> phoneNum;
	this->_contact[this->_index].setPhoneNum(phoneNum);
	std::cout << "Enter contact darkest secret: ";
	std::cin >> darkestSecret;
	this->_contact[this->_index].setDarkestSecret(darkestSecret);
}

void	PhoneBook::addContact(void)
{
	if (this->_index == 8)
		this->_index = 0;
	if (this->_index < 8)
	{
		this->createContact();
		this->_index++;
	}
	if (this->_numContacts < 8)
		this->_numContacts++;
}

void	PhoneBook::searchContact(void)
{
	std::string	to_find_index;

	std::cout << "Enter contact to search: ";
	std::cin >> to_find_index;
	int	f_index = atoi(to_find_index.c_str());

	for (int x = 0; x <= this->_numContacts; ++x)
	{
		if (x == f_index - 1)
		{
			std::cout << "-------------------------------------------------------------" << std::endl;
			std::cout << "| index | first name | last  name |  nickname  |  phone num |" << std::endl;
			std::cout << "|-----------------------------------------------------------|" << std::endl;
			std::cout << "|   " << x + 1 << "   | ";
			if (this->_contact[x].getFirstName().length() > 10)
				std::cout << this->_contact[x].getFirstName().substr(0, 9) << "." << " | ";
			else
				std::cout << std::setw(10) << this->_contact[x].getFirstName() << " | ";
			if (this->_contact[x].getLastName().length() > 10)
				std::cout << this->_contact[x].getLastName().substr(0, 9) << "." << " | ";
			else
				std::cout << std::setw(10) << this->_contact[x].getLastName() << " | ";
			if (this->_contact[x].getNickName().length() > 10)
				std::cout << this->_contact[x].getNickName().substr(0, 9) << "." << " | ";
			else
				std::cout << std::setw(10) << this->_contact[x].getNickName() << " | ";
			if (this->_contact[x].getPhoneNum().length() > 10)
				std::cout << this->_contact[x].getPhoneNum().substr(0, 9) << "." << " |";
			else
				std::cout << std::setw(10) << this->_contact[x].getPhoneNum() << " |";
			std::cout << std::endl;
			std::cout << "-------------------------------------------------------------" << std::endl;
		}
	}
}
