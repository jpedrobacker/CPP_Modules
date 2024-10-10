/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:21:02 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/10 10:57:17 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::get_first_name()
{
	return (this->_first_name);
}

std::string Contact::get_last_name()
{
	return (this->_last_name);
}

std::string Contact::get_nickname()
{
	return (this->_nickname);
}

std::string Contact::get_phone_num()
{
	return (this->_phone_num);
}

std::string Contact::get_darkest_secret()
{
	return (this->_darkest_secret);
}

void Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void Contact::set_phone_num(std::string phone_num)
{
	this->_phone_num = phone_num;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}
