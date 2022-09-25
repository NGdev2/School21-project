/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:47:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 14:44:40 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() {}

Account::Account(int initial_deposit){
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout << 
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" << 
	"created" << std::endl;
}

Account::~Account(){
	_displayTimestamp();
	std::cout << 
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" << 
	"closed" << std::endl;
}

int	Account::getNbAccounts( void ){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << 
	"accounts:" << getNbAccounts() << ";" <<
	"total:" << getTotalAmount() << ";" << 
	"deposits:" << getNbDeposits() << ";" <<
	"withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ){
	int	p_amount = this->checkAmount();
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	_displayTimestamp();
	std::cout << 
	"index:" << this->_accountIndex << ";" <<
	"p_amount:" << p_amount << ";" << 
	"deposit:" << deposit << ";" <<
	"amount:" << this->checkAmount() << ";" << 
	"nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << 
	"index:" << this->_accountIndex << ";" <<
	"p_amount:" << this->checkAmount() << ";"
	"withdrawal:";
	if (withdrawal > this->checkAmount()){
		std::cout << "refused" << std::endl;
		return (false);
	}
	
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << withdrawal << ";" <<
	"amount:" << this->checkAmount() << ";" << 
	"nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const{
	return (this->_amount);
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" <<
	"deposits:" << this->_nbDeposits << ";" <<
	"withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
	time_t tm = std::time(NULL);
	struct tm timenow = *std::localtime(&tm);
	
	std::cout << "[" << timenow.tm_year + 1900 <<
	std::setfill('0') << std::setw(2) << timenow.tm_mon <<
	std::setfill('0') << std::setw(2) << timenow.tm_mday << "_" <<
	std::setfill('0') << std::setw(2) << timenow.tm_hour <<
	std::setfill('0') << std::setw(2) << timenow.tm_min <<
	std::setfill('0') << std::setw(2) << timenow.tm_sec << "] ";
}