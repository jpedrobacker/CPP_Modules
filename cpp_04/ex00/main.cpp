/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:01:16 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/28 15:53:18 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const Dog* d = new Dog();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound(); //is wrong, will output the wrong animal sound
	//j->makeDogThings - does not work, because its of type Animal
	d->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete d;
	delete k;
	return 0;
}
