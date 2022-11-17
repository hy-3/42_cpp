#include <chrono>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit ) {
	this->_accountIndex = getNbAccounts();
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;
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
	int currentAmount = checkAmount();
	this->_amount = currentAmount + deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << currentAmount << ";deposit:" << deposit << ";amount:" << checkAmount() << ";nb_deposits:" << this->_nbDeposits << std::endl;
}


// [19920104_091532] index:5;p_amount:23;withdrawal:refused
// [19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
bool	Account::makeWithdrawal( int withdrawal ) {
	int currentAmount = checkAmount();
	if (withdrawal <= currentAmount) {
		this->_amount = currentAmount - withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << currentAmount << ";withdrawal:" << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	} else {
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << currentAmount << ";withdrawal:refused" << std::endl;
	}
}

int		Account::checkAmount( void ) const {
	return _amount;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	const auto now = std::chrono::system_clock::now();
	const auto now_t = std::chrono::system_clock::to_time_t(now);
	std::cout << "[" << std::put_time(std::localtime(&now_t), "%Y%m%d_%H%M%S") << "] ";
}
