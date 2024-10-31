/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:32:47 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/30 13:28:04 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &dg);
		Dog			&operator=(const Dog &dg);
		void		makeSound(void) const;
		void		setIdea(int i, std::string idea);
		std::string	getIdea(int i) const;
};

#endif
