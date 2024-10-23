/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:01:16 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/23 16:32:42 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main(void)
{
	Animal ani("cat");
	Animal lala;

	std::cout << ani.getType() << " Type!" << std::endl;
	std::cout << lala.getType() << " Type!" << std::endl;
}
