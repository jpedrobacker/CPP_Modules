/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:15:05 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/19 15:43:39 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data original;
	original.raw = 42;
	uintptr_t value = Serializer::serialize(&original);
	Data *recovered = Serializer::deserialize(value);

	std::cout << "Raw data: " << original.raw << std::endl;
	std::cout << "Data recovered: " << recovered->raw << std::endl;
	if (&original == recovered)
		std::cout << "Equal pointers, Serialization worked well!" << std::endl;
	else
		std::cout << "Something Wrong!" << std::endl;

	return 0;
}
