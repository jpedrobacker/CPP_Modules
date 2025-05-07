/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:58:29 by jbergfel          #+#    #+#             */
/*   Updated: 2025/05/06 13:52:36 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	int	intinput;
	std::string	sinput;
	try
	{
		std::cout << "What's your name?: " << std::endl;
		std::cin >> sinput;
		std::cout << "What's your last grade?: " << std::endl;
		std::cin >> intinput;
		Bureaucrat	n_b(sinput, intinput);
	}
	catch (const std::exception &e)
	{
		std::cout << "Error test" << std::endl;
	}
}
