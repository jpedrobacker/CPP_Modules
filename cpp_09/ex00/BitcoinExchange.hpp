/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:12:47 by jbergfel          #+#    #+#             */
/*   Updated: 2025/07/29 17:45:40 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <string>
# include <fstream>
# include <exception>

class BitcoinExchange
{
	private:
		std::ifstream _csvFile;
		std::ifstream _inputFile;
		std::map<std::string, float> _data;

	public:
		~BitcoinExchange();
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange(const std::string file);
		BitcoinExchange &operator=(const BitcoinExchange &src);
};

#endif
