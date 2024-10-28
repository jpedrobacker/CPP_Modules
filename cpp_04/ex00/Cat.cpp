/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:38:58 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/28 15:58:51 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Default Cat Constuctor!" << std::endl;
}

Cat::Cat(const Cat &ct) : Animal(ct)
{
	this->_type = ct.getType();
	std::cout << "Cat copy Constuctor!" << std::endl;
}

Cat	&Cat::operator=(const Cat &ct)
{
	this->_type = ct.getType();
	std::cout << "Cat copy assignment constructor" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}

