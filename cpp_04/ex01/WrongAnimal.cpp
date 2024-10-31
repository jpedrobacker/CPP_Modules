/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:45:07 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/28 13:48:33 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "Default WrongAnimal Constuctor!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wa)
{
	this->_type = wa.getType();
	std::cout << "WrongAnimal copy Constuctor!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wa)
{
	if (this != &wa)
		this->_type = wa.getType();
	std::cout << "WrongAnimal copy assignment constructor" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound!" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
