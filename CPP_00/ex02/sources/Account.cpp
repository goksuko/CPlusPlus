/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:39:46 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/03 13:22:39 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"

# include <iostream> // for std::cout, std::cin
# include <ctime> // for std::time_t, std::tm, std::time, std::localtime
#include <iomanip> // for std::setw, std::setfill

// Static member variables should not be initialized in the constructor's initializer list.
// Instead, they should be defined and initialized outside the class definition.

// make && ./lost_and_found > lost_and_found.txt
// diff -q -y --suppress-common-lines <(cut -c 18- lost_and_found.txt) <(cut -c 18- 19920104_091532.log)

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
	_nbDeposits = _nbDeposits + 1;
	_totalNbDeposits = _totalNbDeposits + 1;
	std::cout << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << \
	std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << \
	";" << "withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount = _amount - withdrawal;
	_totalAmount = _totalAmount - withdrawal;
	_nbWithdrawals = _nbWithdrawals + 1;
	_totalNbWithdrawals = _totalNbWithdrawals + 1;
	std::cout << withdrawal << ";" << "amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << \
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
	";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << \
	_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	std::tm *now = std::localtime(&t);
	std::cout << "[" << now->tm_year + 1900 << std::setw(2) << std::setfill('0') << now->tm_mon + 1 << std::setw(2) << std::setfill('0') << now->tm_mday << \
    "_" << std::setw(2) << std::setfill('0') << now->tm_hour << std::setw(2) << std::setfill('0') << now->tm_min << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}