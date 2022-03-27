#include "money.h"

int main(){
    Money m(0, 0);
    (Money(0, 1) - Money(0, 2)).print();
    // std::cout << Money(10, 5) + Money(20, 99) << std::endl;
    //std::cout << Money(31, 4) - Money(10, 5) << std::endl;
    return 0;
}