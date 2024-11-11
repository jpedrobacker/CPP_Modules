/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:21:02 by jbergfel          #+#    #+#             */
/*   Updated: 2024/11/11 10:18:51 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::getFirstName()
{
	return (this->_firstName);
}

std::string Contact::getLastName()
{
	return (this->_lastName);
}

std::string Contact::getNickName()
{
	return (this->_nickName);
}

std::string Contact::getPhoneNum()
{
	return (this->_phoneNum);
}

std::string Contact::getDarkestSecret()
{
	return (this->_darkestSecret);
}

void Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void Contact::setPhoneNum(std::string phoneNum)
{
	this->_phoneNum = phoneNum;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}
