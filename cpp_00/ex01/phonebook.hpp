/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:55:03 by jbergfel          #+#    #+#             */
/*   Updated: 2024/11/11 10:06:53 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.hpp"

class PhoneBook
{
	private:
		Contact	_contact[8];
		int		_numContacts;
		int		_index;
	public:
		PhoneBook();
		~PhoneBook();
		void	showInstructions(void);
		void	addContact(void);
		void	createContact(void);
		void	searchContact(void);
		void	printContacts(void);
		void	printCurContact(void);
		void	printContact(void);
} ;

#endif
