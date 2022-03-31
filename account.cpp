/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:14:42 by liamprior         #+#    #+#             */
/*   Updated: 2022/03/30 21:21:30 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "account.h"

//make construre
void Account::makeDeposit(Money putAmount) {
    deposites_.push_back(putAmount);
    updatePlease_ = 1;
}

void Account::makeWithdrawals(Money takeAmount) {
    withdrawals_.push_back(takeAmount);
    updatePlease_ = 1;
}

Money Account::getBal(void) {//test
    Money total_D, total_W;
    if (updatePlease_== 1) {//may need to remove
        for (;index_D < deposites_.size(); index_D++)
          total_D = total_D + deposites_[index_D];
        for (;index_W < withdrawals_.size(); index_W++)
            total_W = total_W + withdrawals_[index_W];
        total_ = total_ + total_D;
        total_ = total_ - total_W;
    }
    updatePlease_ = 0;
    return (total_);
}

std::ostream& operator << (std::ostream& outputStream2, Account& account) {
    int i = 0;
    outputStream2 << "Account Details\n--------------------------\nCurrent Balance:";
    outputStream2 << account.getBal();
    outputStream2 << "--------------------------\nNumber of Deposits: ";
    outputStream2 << account.index_D << std::endl;
    outputStream2 << "--------------------" << std::endl;
    for (int it = 0; it < account.deposites_.size(); it++)
        outputStream2 <<"(" << it+1 << ")" << " " << account.deposites_[it];
    outputStream2 << "--------------------------" << std::endl;
    outputStream2 << "Number of Withdrawals: " << account.index_W << std::endl;
    outputStream2 << "--------------------------" << std::endl;
    for (int it = 0; it < account.withdrawals_.size(); it++)
        outputStream2 << "(" << it+1 << ")" << " " << account.withdrawals_[it];
    outputStream2 << std::endl;
    return(outputStream2);
}
