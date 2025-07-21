/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:29:33 by jbergfel          #+#    #+#             */
/*   Updated: 2025/07/21 14:12:19 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <inttypes.h>

typedef struct s_data
{
	int	raw;
}	Data;

class Serializer
{
	private:
		~Serializer();
		Serializer();
		Serializer(const Serializer &src);
		Serializer	&operator=(const Serializer &src);

	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
