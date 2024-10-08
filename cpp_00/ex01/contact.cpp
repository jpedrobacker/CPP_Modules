/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:21:02 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/08 17:43:18 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::get_first_name()
{
	return (this->first_name);
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

std::string Contact::get_phone_num()
{
	return (this->phone_num);
}

std::string Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_phone_num(std::string phone_num)
{
	this->phone_num = phone_num;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
