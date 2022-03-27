#include <iostream>

class Money{

private:
    int dollars;
    int cents;

public:
    Money operator + (const Money rhs);
    Money operator - (const Money rhs);

    Money(int newDollars, int newCents){
        dollars = newDollars;
        cents = newCents;
    }

    void print(){
        std::cout << dollars << "." << cents << std::endl;
    }
};