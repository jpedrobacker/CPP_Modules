/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 19:10:53 by jbergfel          #+#    #+#             */
/*   Updated: 2025/12/21 19:21:58 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include "RPN.hpp"
#include <sstream>
#include <iostream>
#include <cstdlib>

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &src)
{
	*this = src;
}

RPN &RPN::operator=(const RPN &src)
{
	if(this != &src)
		this->_stack = src._stack;
	return *this;
}

void RPN::process(const std::string &str)
{
	std::istringstream iss(str);
	std::string token;

	while (iss >> token)
	{
		if (token.size() == 1 && isdigit(token[0]))
			_stack.push(token[0] - '0');
		else if (token == "+" || token == "-" || token == "*" || token == "/")
			applyOperation(token);
		else
			throw std::runtime_error("Error");
	}

	if (_stack.size() != 1)
		throw std::runtime_error("Error");
}

void RPN::applyOperation(const std::string &operation)
{
	if (_stack.size() < 2)
		throw std::runtime_error("Error");

	int b = _stack.top(); _stack.pop();
	int a = _stack.top(); _stack.pop();
	int result;

	if (operation == "+")
		result = a + b;
	else if (operation == "-")
		result = a - b;
	else if (operation == "*")
		result = a * b;
	else if (operation == "/")
	{
		if (b == 0)
			throw std::runtime_error("Error");
		result = a / b;
	}
	else
		throw std::runtime_error("Error");

	_stack.push(result);
}

int RPN::getResult() const
{
	return _stack.top();
}
