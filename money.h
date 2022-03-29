#ifndef MONEY_H
#define MONEY_H
#include <iostream>

class Money{
private:
    int dollars_;
    int cents_;
    bool sign_;
public:
    Money operator + (const Money rhs);
    Money operator - (const Money rhs);
    friend std::ostream& operator << (std::ostream&, const Money&);
    Money(int newDollars, int newCents){
        dollars_ = newDollars;
        cents_ = newCents;
    }
};

#endif