/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:53:58 by liamprior         #+#    #+#             */
/*   Updated: 2022/03/30 21:07:45 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "money.h"
#include "account.h"

int main ()
{
    Money money0(300, 23);
    Money money1(200, 00);
    Money money2(300, 24);
    Money money3(501, 22);
    Money money4(300, 10);
    Money money5(201, 34);

    Account bankofthewest(money0);
    std::cout << bankofthewest;
    bankofthewest.makeDeposit(money1);
    bankofthewest.makeDeposit(money2);
    bankofthewest.makeDeposit(money3);
    std::cout << bankofthewest;
    bankofthewest.makeWithdrawals(money4);
    bankofthewest.makeWithdrawals(money5);
    std::cout << bankofthewest;
}
//Deposit into the account, in order, $200.00, $300.24, and $501.22