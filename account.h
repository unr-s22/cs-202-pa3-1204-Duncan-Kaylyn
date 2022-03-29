/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:14:45 by liamprior         #+#    #+#             */
/*   Updated: 2022/03/27 14:20:51 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "money.h"
#include <vector>

class Account : public Money {
    public:
        Account(Money);
        void makeDeposit(Money);
        void makeWithdrawals(Money);
    private:
        bool updated;
        std::vector<Money> list;
};

#endif