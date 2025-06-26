/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomsato <tomsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 00:28:12 by tomsato           #+#    #+#             */
/*   Updated: 2025/06/27 00:28:14 by tomsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
}

Account::Account(int initial_deposit): _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
    *this = Account();
    _amount = initial_deposit;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts - 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
            << ";amount:" << _amount
            << ";created" << std::endl;
}

Account::~Account()
{
}

void Account::makeDeposit(int deposit)
{
}

bool Account::makeWithdrawal(int withdrawal)
{
    return true;
}

int Account::checkAmount() const
{
    return 0;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
            << ";amount:" << _amount
            << ";deposits:" << _nbDeposits
            << ";withdrawals:" << _nbWithdrawals
            << std::endl;
}

void Account::_displayTimestamp()
{
    const std::time_t t = std::time(nullptr);
    const std::tm *now = std::localtime(&t);
    char buffer[42];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", now);
    std::cout << "[" << buffer << "]";
}

Account::Account(): _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
}
