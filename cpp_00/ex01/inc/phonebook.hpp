/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:55:03 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/10 11:01:02 by jbergfel         ###   ########.fr       */
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
		int		_num_contacts;
		int		_index;
	public:
		PhoneBook();
		~PhoneBook();
		void	show_instructions(void);
		void	add_contact(void);
		void	create_contact(void);
		void	search_contact(void);
		void	print_contacts(void);
		void	print_cur_contact(void);
		void	print_contact(void);
} ;

#endif
