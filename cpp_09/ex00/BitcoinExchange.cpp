/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:12:44 by jbergfel          #+#    #+#             */
/*   Updated: 2025/07/29 17:46:29 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange(void)
{
	this->_csvFile.close();
	this->_inputFile.close();
}

BitcoinExchange::BitcoinExchange(void)
{
	this->_csvFile.close();
	this->_inputFile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &src)
{
	if (this != &src)
		this->_data = src._data;
	return (*this);
}

BitcoinExchange::BitcoinExchange(const std::string file)
{

}
