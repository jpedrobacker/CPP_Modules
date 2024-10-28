/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:44:16 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/28 15:59:40 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "Default WrongCat Constuctor!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wc) : WrongAnimal(wc)
{
	this->_type = wc.getType();
	std::cout << "WrongCat copy Constuctor!" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wc)
{
	this->_type = wc.getType();
	std::cout << "WrongCat copy assignment constructor" << std::endl;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miau!" << std::endl;
}

