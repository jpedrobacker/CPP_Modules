/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:32:25 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/30 13:35:33 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default Dog Constuctor!" << std::endl;
}

Dog::Dog(const Dog &dg) : Animal(dg)
{
	this->_type = dg.getType();
	_brain = new Brain(*dg._brain);
	std::cout << "Dog copy Constuctor!" << std::endl;
}

Dog	&Dog::operator=(const Dog &dg)
{
	this->_type = dg.getType();
	if (this->_brain)
		delete this->_brain;
	_brain = new Brain(*dg._brain);
	std::cout << "Dog copy assignment constructor" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "AuAu!" << std::endl;
}

void	Dog::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->_brain->ideas[i] = idea;
	else
		std::cout << "Invalid index" << std::endl;
}

std::string	Dog::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (this->_brain->ideas[i]);
	else
		std::cout << "Invalid index" << std::endl;
	return ("");
}
