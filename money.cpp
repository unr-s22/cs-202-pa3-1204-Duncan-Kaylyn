#include "money.h"

Money Money::operator + (const Money rhs){
    int d = dollars_ + rhs.dollars_;
    int c = cents_ + rhs.cents_;
    if(c > 99){
        d += 1;
        c -= 100;
    }
    return Money(d,c);
}

Money Money::operator - (const Money rhs){
    int n1 = dollars_*100+cents_;
    int n2 = rhs.dollars_*100+rhs.cents_;
    int n3 = n1 - n2;
    int d = n3/100;
    int c = n3%100;
    c=c<0?c*(-1):c*1;
    return (Money(d,c));
}

std::ostream& operator << (std::ostream& outputStream, const Money& money) {
    outputStream << "$" << money.dollars_ << ".";
    if (!money.cents_)
        outputStream << "00";
    else if (money.cents_ < 10)
        outputStream << "0" << money.cents_;
    else
        outputStream << money.cents_;
    outputStream << std::endl;
    return(outputStream);
}
