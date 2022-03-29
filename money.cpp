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
    sign_=d<0?1:0;
    c=c<0?c*(-1):c*1;
    d=d<0?d*(-1):d*1;
    return (Money(d,c));
}

std::ostream& operator << (std::ostream& outputStream, const Money& money) {
    outputStream << (!money.sign_?"":"-") << "$" << money.dollars_ << "." << money.cents_ << std::endl;
    return(outputStream);
}
