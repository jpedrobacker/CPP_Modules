/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:29:20 by jbergfel          #+#    #+#             */
/*   Updated: 2025/07/04 19:12:39 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::~Serializer()
{
	std::cout << "Serializer destructor method called" << std::endl;
}

Serializer::Serializer()
{}

Serializer::Serializer(const Serializer &src)
{
	*this = src;
}

Serializer &Serializer::operator=(const Serializer &src)
{
	if (this != &src) {}
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t serialize;

	serialize = reinterpret_cast<uintptr_t>(ptr);
	return (serialize);
}


Data *Serializer::deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}
