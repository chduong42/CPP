/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:02:03 by chduong           #+#    #+#             */
/*   Updated: 2022/06/17 18:32:41 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>

Account::Account(int initial_deposit) : _amount(initial_deposit) {
    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;
    
}

Account::~Account(void) {
    Account::_nbAccounts -= 1;
}

int	Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
}


int	Account::getTotalAmount( void ) {
    return (Account::_totalAmount);   
}


int	Account::getNbDeposits( void ) {
    return (Account::_totalNbDeposits);   
}


int	Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);   
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::displayAccountsInfos(void) {
    
}

void	Account::makeDeposit(int deposit) {
    this->_amount += deposit;
    Account::_nbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    if (this->_amount >= withdrawal)
    {
        this->_amount -= withdrawal;
        Account::_nbWithdrawals += 1;
        return true;    
    }
    return false;
}

int		Account::checkAmount( void ) const {
    return Account::_amount;
}

void	Account::displayStatus( void ) const {
    
}

void	Account::_displayTimestamp( void ) {
    
}
