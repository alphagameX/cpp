/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:06:33 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 13:13:16 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

#ifndef DEBUG
# define DEBUG 0
#endif 

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = Account::_nbAccounts;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_amount = initial_deposit;
	Account::_totalAmount += _amount;
	Account::_nbAccounts ++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t now;
	 tm *gmtm;

	if (!DEBUG)
	{
		now = time(0);
		gmtm = gmtime(&now);

		std::cout << '[' << gmtm->tm_year + 1900;
		std::cout << (char)(gmtm->tm_mon + 1 < 10 ? '0' : NULL) << gmtm->tm_mon + 1;
		std::cout << (char)(gmtm->tm_mday < 10 ? '0' : NULL) << gmtm->tm_mday << '_';	
		std::cout << gmtm->tm_hour << gmtm->tm_min << gmtm->tm_sec << "] ";	
	}
	else
		std::cout << "[19920104_091532] ";
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:";
	_amount += deposit;
	_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool success;

	success = false;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	
	if(this->checkAmount() - withdrawal < 0)
		std::cout << "refused" << std::endl;
	else
	{
		success = true;
		std::cout << withdrawal << ";amount:";
		_nbWithdrawals += 1;
		_amount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		std::cout << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return (success);
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed";
	if(Account::_nbAccounts != 0)
		std::cout << std::endl;
}