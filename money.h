#ifndef MONEY_H
#define MONEY_H
#include <iostream>

class Money{
private:
    int dollars_;
    int cents_;
public:
    bool sign_;
    Money(){
        dollars_ = 0;
        cents_ = 0;
        sign_ = 0;
    }
    Money(int newDollars, int newCents){
        dollars_ = newDollars;
        cents_ = newCents;
        if (dollars_ < 0)
            sign_ = 1;
    }
    Money operator + (const Money rhs);
    Money operator - (const Money rhs);
    friend std::ostream& operator << (std::ostream&, const Money&);
};

#endif