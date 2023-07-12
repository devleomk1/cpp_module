/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 23:44:58 by jisokang          #+#    #+#             */
/*   Updated: 2023/07/12 15:14:27 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

/**
 * @brief static 멤버 변수 초기화
 *
 */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/**
 * @brief Construct a new Account:: Account object (사용안함)
 *
 */
Account::Account( void ) {}

/**
 * @brief Construct a new Account:: Account object
 *
 * @param initial_deposit 초기 예치금
 */
Account::Account( int initial_deposit )
{
	_displayTimestamp();

	this->_accountIndex = _nbAccounts++;
	this->_amount		= initial_deposit;
	this->_nbDeposits	= 0;
	this->_nbWithdrawals= 0;

	_totalAmount += initial_deposit;

	std::cout
		<< "index:"   << this->_accountIndex
		<< ";amount:" << checkAmount()
		<< ";created"  <<
	std::endl;

}

/**
 * @brief Destroy the Account:: Account object
 *
 */
Account::~Account( void )
{
	_displayTimestamp();
	std::cout
		<< "index:"   << this->_accountIndex
		<< ";amount:" << checkAmount()
		<< ";closed"  <<
	std::endl;
}

/**
 * @brief Get static _nbAccounts function
 *
 * 정적 함수(static function)를 선언 할 때만 앞에 static을 붙인다.
 * 정적 함수 = 정적 변수를 리턴할 함수
 * 공유 메모리를 리턴하기 때문에 일반 멤버 변수는 리턴 할 수 없음 햣
 * @return int _nbAccounts
 */
int Account::getNbAccounts( void )
{
	return ( _nbAccounts );
}

/**
 * @brief Get _totalAmount function
 *
 * @return int _totalAmount
 */
int	Account::getTotalAmount( void )
{
	return ( _totalAmount );
}

/**
 * @brief Get _totalNbDeposits function
 *
 * @return int _totalNbDeposits 모든 계좌의 예금 횟수 합
 */
int	Account::getNbDeposits( void )
{
	return ( _totalNbDeposits );
}

/**
 * @brief Get _totalNbDeposits Function
 *
 * @return int _totalNbWithdrawals 모든 계좌의 출금 횟수 합
 */
int	Account::getNbWithdrawals( void )
{
	return ( _totalNbWithdrawals );
}

/**
 * @brief Display Real Timestamp Function
 *
 */
void	Account::_displayTimestamp( void )
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	std::strftime (buffer,80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "[" << buffer << "] " ;
}

/**
 * @brief Display Accounts Infomaiton
 *
 */
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout
		<< "accounts:"		<< getNbAccounts()
		<< ";total:"		<< getTotalAmount()
		<< ";deposits:"		<< getNbDeposits()		// 예금
		<< ";withdrawals:"	<< getNbWithdrawals()	// 출금
	<< std::endl;
}

/**
 * @brief Make Deposit Function
 *
 * @param deposit 예금액
 */
void	Account::makeDeposit( int deposit )
{
	int p_amount = checkAmount();
	this->_amount += deposit;

	_totalAmount += deposit;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout
		<< "index:" 		<< this->_accountIndex
		<< ";p_amount:" 	<< p_amount
		<< ";deposit:" 		<< deposit
		<< ";amont:"		<< checkAmount()
		<< ";nb_deposits:"	<< ++this->_nbDeposits
	<< std::endl;
}

/**
 * @brief Make Withdrawal Function
 *
 * @param withdrawal 출금액
 * @return true 	출금 성공
 * @return false 	출금 실패
 */
bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount = this->_amount;

	_displayTimestamp();
	if (checkAmount() < withdrawal)
	{
		std::cout
			<< "index:" 	<< this->_accountIndex
			<< ";p_amount:" << p_amount
			<< ";withdrawal:refused"
		<< std::endl;
		return false;
	}
	this->_amount -= withdrawal;

	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout
		<< "index:" 		<< this->_accountIndex
		<< ";p_amount:" 	<< p_amount
		<< ";withdrawal:" 	<< withdrawal
		<< ";amont:"		<< checkAmount()
		<< ";nb_withdrawals:"	<< ++this->_nbWithdrawals
	<< std::endl;

	return true;
}

/**
 * @brief Check Amount
 *
 * @return int _amount
 */
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

/**
 * @brief Display Status Function
 *
 */
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout
		<< "index:" 		<< this->_accountIndex
		<< ";amount:" 		<< checkAmount()
		<< ";deposits:" 	<< this->_nbDeposits
		<< ";withdrawals:"	<< this->_nbWithdrawals
	<< std::endl;
}
