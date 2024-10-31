/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:08:40 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/30 13:31:46 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

Brain::Brain(const Brain &br)
{
	std::cout << "Brain copy constructor called!" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = br.ideas[i];
}

Brain	&Brain::operator=(const Brain &br)
{
	std::cout << "Brain copy assignment constructor called!" << std::endl;
	if (this != &br)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = br.ideas[i];
	}
	return (*this);
}
