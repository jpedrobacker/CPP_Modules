/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:03:34 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/30 13:22:50 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Default Animal Constuctor!" << std::endl;
}

Animal::Animal(const Animal &an)
{
	_type = an.getType();
	std::cout << "Animal copy Constuctor!" << std::endl;
}

Animal &Animal::operator=(const Animal &an)
{
	if (this != &an)
		this->_type = an.getType();
	std::cout << "Animal copy assignment constructor" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound!" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
