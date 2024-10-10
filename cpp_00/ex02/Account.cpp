/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:55:22 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/10 11:58:05 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) //display general infos
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawls:" << _totalNbWithdrawals << std::endl;
}

Account::Account(void) //init an account without a deposit?
{
	_displayTimestamp();
}

Account::Account(int initial_deposit) //init account with a deposit
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) //close account
{
	_displayTimestamp();
	std::count << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp()
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposit:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	auto now = std::chrono::system_clock::now();

	std::time_t current_time = std::chrono::system_clock::to_time_t(now);

	std::tm local_time = *std::localtime(&current_time);

	std::cout << "[" << std::put_time(&local_time, "%Y%m%d_%H%M%S") << "] ";
}
