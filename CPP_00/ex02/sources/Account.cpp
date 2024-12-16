/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:39:46 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:39:47 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"

# include <iostream> // for std::cout, std::cin
# include <ctime> // for std::time_t, std::tm, std::time, std::localtime

// Static member variables should not be initialized in the constructor's initializer list.
// Instead, they should be defined and initialized outside the class definition.

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0 ;

Account::Account(int initial_deposit)
{
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_nbAccounts = _nbAccounts + 1;
	_totalAmount = _totalAmount + initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << \
	initial_deposit << ";" << "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << \
	";" << "closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << \
	";" << "deposits:" << _totalNbDeposits << ";" << "withdrawals:" << \
	_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << \
	";" << "deposit:" << deposit << ";";
	_amount = _amount + deposit;
	_totalAmount = _totalAmount + deposit;
	_totalNbDeposits = _totalNbDeposits + 1;
	std::cout << "amount:" << _amount << ";" << "nb_deposits:" << _totalNbDeposits << \
	std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << \
	";" << "withdrawal:" << withdrawal << ";";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount = _amount - withdrawal;
	_totalAmount = _totalAmount - withdrawal;
	_totalNbWithdrawals = _totalNbWithdrawals + 1;
	std::cout << "amount:" << _amount << ";" << "nb_withdrawals:" << _totalNbWithdrawals << \
	std::endl;
	return (true);
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << \
	";" << "deposits:" << _totalNbDeposits << ";" << "withdrawals:" << \
	_totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	std::tm *now = std::localtime(&t);
	std::cout << "[" << now->tm_year + 1900 << now->tm_mon + 1 << now->tm_mday << \
	"_" << now->tm_hour << now->tm_min << now->tm_sec << "] ";
}