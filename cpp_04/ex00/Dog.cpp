/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:32:25 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/28 15:58:43 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Default Dog Constuctor!" << std::endl;
}

Dog::Dog(const Dog &dg) : Animal(dg)
{
	this->_type = dg.getType();
	std::cout << "Dog copy Constuctor!" << std::endl;
}

Dog	&Dog::operator=(const Dog &dg)
{
	this->_type = dg.getType();
	std::cout << "Dog copy assignment constructor" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "AuAu!" << std::endl;
}
