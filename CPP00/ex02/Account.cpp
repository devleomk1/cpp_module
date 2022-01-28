/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:42:28 by jisokang          #+#    #+#             */
/*   Updated: 2022/01/27 04:45:40 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts;

int	Account::getNbAccounts( void )
{
	return(_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return(_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return(_nbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return(_nbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
	return ;
}

Account::Account( int initial_deposit )
{
	return ;
}
Account::~Account( void )
{
	return ;
}

void	makeDeposit( int deposit );
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;
