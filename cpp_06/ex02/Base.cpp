/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:52:59 by jbergfel          #+#    #+#             */
/*   Updated: 2025/07/21 14:23:51 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{}

Base	*generate(void)
{
	srand(time(0));
	int randomNum = rand() % 4;

	if (randomNum == 1)
	{
		std::cout << "Base A created!" << std::endl;
		return (new A());
	}
	else if (randomNum == 2)
	{
		std::cout << "Base B created!" << std::endl;
		return (new B());
	}
	else if (randomNum == 3)
	{
		std::cout << "Base C created!" << std::endl;
		return (new C());
	}
	else
	{
		std::cout << "Random Base not generated" << std::endl;
		return (0);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Base point is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Base point is B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Base point is C" << std::endl;
	else
		std::cout << "Cannot identify Base pointer" << std::endl;
}

void	identify(Base &p)
{

	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "Found!!" << std::endl;
		std::cout << "The Base pointer is a instance of A." << std::endl;
		(void)a;
	}
	catch (const std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "Found!!" << std::endl;
			std::cout << "The Base pointer is a instance of B." << std::endl;
			(void)b;
		}
		catch (const std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "Found!!" << std::endl;
				std::cout << "The Case pointer is a instance of C." << std::endl;
				(void)c;
			}
			catch (const std::exception &e)
			{
				std::cout << "Invalid data type!" << std::endl;
			}
		}
	}
	return ;
}
