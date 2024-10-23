/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:03:34 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/23 16:33:02 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Uknown";
}

Animal::Animal(std::string type)
{
	_type = type;
}

Animal::~Animal()
{}

void	Animal::setType(std::string type)
{
	_type = type;
}

std::string	Animal::getType()
{
	return (_type);
}
