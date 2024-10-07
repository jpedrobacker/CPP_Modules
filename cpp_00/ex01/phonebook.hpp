/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:55:03 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/07 14:53:39 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	darkest_secret;
	public:
		void	create_contact(void);
		void	delete_contact(void);
		int	index;
} ;

class PhoneBook
{
	private:
		Contact	contact[8];
		int		num_contacts;
		int		index;
	public:
		PhoneBook();
		~PhoneBook();
		void	add_num(void);
		void	search_num(void);
		void	show_instructions(void);
} ;
