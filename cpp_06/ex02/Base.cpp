/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:52:59 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/02 08:05:24 by jbergfel         ###   ########.fr       */
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
	bool id = false;

	if (!id)
	{
		A* a = dynamic_cast<A*>(&p);
		if (a)
		{
			std::cout << "A" << std::endl;
			id = true;
		}
	}
	if (!id)
	{
		B* b = dynamic_cast<B*>(&p);
		if (b)
		{
			std::cout << "B" << std::endl;
			id = true;
		}
	}
	if (!id)
	{
		C* c = dynamic_cast<C*>(&p);
		if (c)
		{
			std::cout << "C" << std::endl;
			id = true;
		}
	}
	return ;
}
