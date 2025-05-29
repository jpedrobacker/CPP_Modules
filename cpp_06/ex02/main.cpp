/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:49:31 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/29 13:07:03 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *b;
	b = generate();
	std::cout << "pointer" << std::endl;
	identify(b);

	delete b;
	return (0);
}
