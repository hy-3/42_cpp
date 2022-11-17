#include <chrono>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

/*
[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
*/
void	Account::displayAccountsInfos( void ) {
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

/*
[19920104_091532] index:0;amount:42;created
[19920104_091532] index:1;amount:54;created
[19920104_091532] index:2;amount:957;created
[19920104_091532] index:3;amount:432;created
[19920104_091532] index:4;amount:1234;created
[19920104_091532] index:5;amount:0;created
[19920104_091532] index:6;amount:754;created
[19920104_091532] index:7;amount:16576;created
*/
Account::Account( int initial_deposit ) {
	makeDeposit(initial_deposit);
	_displayTimestamp();
	std::cout << "index:" << getNbAccounts() << ";amount:" << initial_deposit << ";created" << std::endl;
}

/*
[19920104_091532] index:0;amount:47;closed
[19920104_091532] index:1;amount:785;closed
[19920104_091532] index:2;amount:864;closed
[19920104_091532] index:3;amount:430;closed
[19920104_091532] index:4;amount:1245;closed
[19920104_091532] index:5;amount:23;closed
[19920104_091532] index:6;amount:106;closed
[19920104_091532] index:7;amount:8942;closed
*/
Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << getNbAccounts() << ";amount:" << checkAmount() << ";closed" << std::endl;
}

/*
[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
[19920104_091532] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1
[19920104_091532] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
[19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
[19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
[19920104_091532] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1
[19920104_091532] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1
[19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
*/
void	Account::makeDeposit( int deposit ) {
	this->_amount = checkAmount() + deposit;
	this->_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	this->_amount = checkAmount() - withdrawal;
	this->_nbWithdrawals--;
}

int		Account::checkAmount( void ) const {
	return _amount;
}

/*
[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
[19920104_091532] index:1;amount:54;deposits:0;withdrawals:0
[19920104_091532] index:2;amount:957;deposits:0;withdrawals:0
[19920104_091532] index:3;amount:432;deposits:0;withdrawals:0
[19920104_091532] index:4;amount:1234;deposits:0;withdrawals:0
[19920104_091532] index:5;amount:0;deposits:0;withdrawals:0
[19920104_091532] index:6;amount:754;deposits:0;withdrawals:0
[19920104_091532] index:7;amount:16576;deposits:0;withdrawals:0
*/
void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << getNbAccounts() << ";amount:" << checkAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp( void ) {
	const auto now = std::chrono::system_clock::now();
	const auto now_t = std::chrono::system_clock::to_time_t(now);
	std::cout << "[" << std::put_time(std::localtime(&now_t), "%Y%m%d_%H%M%S") << "] ";
}
