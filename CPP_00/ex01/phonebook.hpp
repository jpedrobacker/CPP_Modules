/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:55:03 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/01 18:57:56 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Contact
{
	private:
		int			index;
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	darkest_secret;
	public:
		//adds the rest of methods and general info

} ;

class PhoneBook
{
	private:
		//all contacts should be private
		Contact		contact[8];
		int			index;
	public:
		void		add_num();
		void		search_num();
} ;
