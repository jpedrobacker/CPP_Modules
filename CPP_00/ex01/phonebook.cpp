/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:55:00 by jbergfel          #+#    #+#             */
/*   Updated: 2024/09/30 15:41:39 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	phonebook::myMethod()
{
	std::cout << "TESTE5" << std::endl;
}

int main(void)
{
	phonebook	book;

	book.myMethod();

	return (0);
}
