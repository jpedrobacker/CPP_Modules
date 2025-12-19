/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 08:09:43 by jbergfel          #+#    #+#             */
/*   Updated: 2025/12/19 08:10:11 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <cstdlib>
# include <string>
# include <map>
# include <exception>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _data;
		std::ifstream _csvFile;
		std::ifstream _inputFile;

	public:
		BitcoinExchange();
		BitcoinExchange(const std::string &databaseFile);
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();

		BitcoinExchange &operator=(const BitcoinExchange &other);

		void parseCSV();
		void readInputFile();
		float getTargetValue(const std::string &targetDate);

		class OpenFileErrorException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Error: could not open file."); };
		};
};
