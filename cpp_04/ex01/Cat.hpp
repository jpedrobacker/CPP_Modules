/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:39:20 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/30 13:28:11 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &ct);
		Cat			&operator=(const Cat &ct);
		void		makeSound(void) const;
		void		setIdea(int i, std::string idea);
		std::string	getIdea(int i) const;
};

#endif
