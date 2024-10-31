/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:38:58 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/30 13:35:37 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default Cat Constuctor!" << std::endl;
}

Cat::Cat(const Cat &ct) : Animal(ct)
{
	this->_type = ct.getType();
	_brain = new Brain(*ct._brain);
	std::cout << "Cat copy Constuctor!" << std::endl;
}

Cat	&Cat::operator=(const Cat &ct)
{
	this->_type = ct.getType();
	if (this->_brain)
		delete this->_brain;
	_brain = new Brain(*ct._brain);
	std::cout << "Cat copy assignment constructor" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}

void	Cat::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->_brain->ideas[i] = idea;
	else
		std::cout << "Invalid index" << std::endl;
}

std::string	Cat::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (this->_brain->ideas[i]);
	else
		std::cout << "Invalid index" << std::endl;
	return ("");
}
