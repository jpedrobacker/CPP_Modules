/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:49:31 by jbergfel          #+#    #+#             */
/*   Updated: 2025/08/27 14:48:55 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *b;
	b = generate();
	std::cout << "pointer:" << std::endl;
	identify(b);
	std::cout << "address:" << std::endl;
	identify(*b);

	delete b;
	return (0);
}
