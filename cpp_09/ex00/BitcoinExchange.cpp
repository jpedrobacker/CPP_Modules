/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 08:09:30 by jbergfel          #+#    #+#             */
/*   Updated: 2025/12/19 08:11:31 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string &filename)
{
	this->_csvFile.open("data.csv", std::ifstream::in);
	this->_inputFile.open(filename.c_str(), std::ifstream::in);
	if (!this->_csvFile.is_open() || !this->_inputFile.is_open())
		throw (BitcoinExchange::OpenFileErrorException());
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) { *this = other; }

BitcoinExchange::~BitcoinExchange()
{
	this->_csvFile.close();
	this->_inputFile.close();
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		this->_data = other._data;
	return (*this);
}

void BitcoinExchange::parseCSV()
{
	std::string date, value, line;

	while (std::getline(this->_csvFile, line))
	{
		date = line.substr(0, 10);
		value = line.substr(11, -1);
		this->_data[date] = std::atof(value.c_str());
	}
}

static bool isLeapYear(int year)
{
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

static bool isValidDate(const std::string &line)
{
	if (line.length() != 10)
		return (false);

	std::string date = line.substr(0, 10);
	if (date[4] != '-' || date[7] != '-')
		return (false);

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	if (month < 1 || month > 12)
		return (false);
	int day = std::atoi(date.substr(8, 2).c_str());
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (isLeapYear(year))
		daysInMonth[1] = 29;
	if (day < 1 || day > daysInMonth[month - 1])
		return (false);
	return (true);
}

float BitcoinExchange::getTargetValue(const std::string &targetDate)
{
	std::map<std::string, float>::iterator it = this->_data.begin();
	for (; it != this->_data.end(); it++)
		if (it->first == targetDate)
			return (it->second);

	it = this->_data.lower_bound(targetDate);
	if (it == this->_data.begin())
		return (-1);
	it--;
	return (it->second);
}

void BitcoinExchange::readInputFile()
{
	std::string line, date, str_value, delimiter;
	float value;
	char *s;

	getline(this->_inputFile, line);
	if (line != "date | value")
	{
		std::cerr << "Error: invalid input." << std::endl;
		return;
	}

	while (getline(this->_inputFile, line))
	{
		if (line.empty())
		{
			std::cerr << "Error: empty line." << std::endl;
			continue;
		}
		if (line.length() < 14)
		{
			std::cerr << "Error: bad input> " << line << std::endl;
			continue;
		}

		date = line.substr(0, 10);
		str_value = line.substr(13);
		value = std::strtof(str_value.c_str(), &s);
		delimiter = line.substr(10, 3);
		if (delimiter != " | " || !isValidDate(date) || *s != '\0')
			std::cerr << "Error: bad input> " << line << std::endl;
		else if (value < 0 || value > 1000)
			std::cerr << "Error: value out of range> " << line << ". The number must be between 0 and 1000" << std::endl;
		else
		{
			float targetValue = this->getTargetValue(date);
			if (targetValue == -1)
				std::cerr << "Error: date not found> " << date << std::endl;
			else
				std::cout << date << " => " << value << " = " << targetValue * value << std::endl;
		}
	}
}
