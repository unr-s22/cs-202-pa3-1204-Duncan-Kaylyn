/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:14:45 by liamprior         #+#    #+#             */
/*   Updated: 2022/03/30 19:13:03 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "money.h"
#include <vector>

class Account : public Money {
    public:
        Account(Money money) {
            total_ = money;
        }
        void makeDeposit(Money);
        void makeWithdrawals(Money);
        Money getBal(void);
        friend std::ostream& operator << (std::ostream&, Account&);
    private:
        Money total_;
        int index_W = 0, index_D = 0;
        bool updatePlease_;
        std::vector<Money> deposites_;
        std::vector<Money> withdrawals_;
};

#endif