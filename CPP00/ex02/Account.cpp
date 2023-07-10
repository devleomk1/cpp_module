/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 23:44:58 by jisokang          #+#    #+#             */
/*   Updated: 2023/07/10 19:01:34 by jisokang         ###   ########.fr       */
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

	_totalAmount += initial_deposit;

	std::cout
		<< "index:"   << this->_accountIndex
		<< ";amount:" << this->_amount
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
		<< ";amount:" << this->_amount
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
		<< ";deposits:"		<< getNbDeposits()
		<< ";withdrawals:"	<< getNbWithdrawals()
	<< std::endl;
}



//	void	makeDeposit( int deposit );
//	bool	makeWithdrawal( int withdrawal );
//	int		checkAmount( void ) const;
//	void	displayStatus( void ) const;
