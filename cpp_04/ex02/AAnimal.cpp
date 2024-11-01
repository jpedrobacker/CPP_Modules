/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:03:34 by jbergfel          #+#    #+#             */
/*   Updated: 2024/11/01 13:31:28 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->_type = "AAnimal";
	std::cout << "Default AAnimal Constuctor!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &an)
{
	_type = an.getType();
	std::cout << "AAnimal copy Constuctor!" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &an)
{
	if (this != &an)
		this->_type = an.getType();
	std::cout << "AAnimal copy assignment constructor" << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor" << std::endl;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal sound!" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
