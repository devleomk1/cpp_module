/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 23:44:58 by jisokang          #+#    #+#             */
/*   Updated: 2023/07/11 22:47:25 by jisokang         ###   ########.fr       */
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
 * @brief
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

int	Account::getTotalAmount( void )
{
	return ( _totalAmount );
}

/**
 * @brief
 *
 * 아니 함수 이름이 그럼 이러면 안되쥬
 * 아니 왜 토탈 빼먹냐고 불란서 놈들아
 * @return int _totalNbDeposits
 */
int	Account::getNbDeposits( void )
{
	return ( _totalNbDeposits );
}

int	Account::getNbWithdrawals( void )
{
	return ( _totalNbWithdrawals );
}

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

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

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
