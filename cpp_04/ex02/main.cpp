/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:01:16 by jbergfel          #+#    #+#             */
/*   Updated: 2024/11/01 14:08:50 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//AAnimal	animal; //not possible anymore, because its abstract now.
	//animal.makeSound(); //not possible anymore, because its abstract now.
	AAnimal *animals[4] = {new Dog(), new Cat(), new Dog(), new Cat()};

	std::cout << std::endl;
	animals[0]->makeSound();
	animals[1]->makeSound();
	animals[2]->makeSound();
	animals[3]->makeSound();

	std::cout << std::endl;
	Dog d1;
	d1.setIdea(0, "AAAAA");
	Dog d2(d1);
	std::cout << "Ideas d2:" << std::endl;
	std::cout << d2.getIdea(0) << std::endl;
	d2.setIdea(1, "BBBBBB");
	Dog d3;
	d3 = d2;
	std::cout << "Ideas d3:" << std::endl;
	std::cout << d3.getIdea(0) << std::endl;
	std::cout << d3.getIdea(1) << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];
	return (0);
}
