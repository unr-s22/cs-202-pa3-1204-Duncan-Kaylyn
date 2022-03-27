#include "money.h"

Money Money::operator + (const Money rhs){
    int d = dollars + rhs.dollars;
    int c = cents + rhs.cents;
    if(c > 99){
        d += 1;
        c -= 100;
    }
    return Money(d, c);
}

Money Money::operator - (const Money rhs){
    int d = dollars - rhs.dollars;
    int c = cents - rhs.cents;
    if(d = 0 && c < 0){
        d = 0;
        c = 0 - cents;
    }
    else if(d != 0 && c < 0){
        d -= 1;
        c += 100;
    }

    if(c < 0 || d < 0){
        c *= c;
        std::cout << "-";
    }
    return Money(d, c);
}