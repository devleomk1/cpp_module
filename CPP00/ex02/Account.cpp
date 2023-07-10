/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 23:44:58 by jisokang          #+#    #+#             */
/*   Updated: 2023/07/10 16:04:33 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account( void ) {}

Account::Account( int initial_deposit )
{

}

Account::~Account( void )
{

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
	std::cout << "[19920104_091532] ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
}



//	void	makeDeposit( int deposit );
//	bool	makeWithdrawal( int withdrawal );
//	int		checkAmount( void ) const;
//	void	displayStatus( void ) const;
