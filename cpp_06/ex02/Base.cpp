/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:52:59 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/29 13:08:36 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{}

Base	*generate(void)
{
	int randNum = 1 + (rand() % 3);

	std::cout << randNum << std::endl;
	if (randNum == 1)
	{
		std::cout << "Base A created!" << std::endl;
		return (new A());
	}
	else if (randNum == 2)
	{
		std::cout << "Base B created!" << std::endl;
		return (new B());
	}
	else if (randNum == 3)
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
	return ;
}
