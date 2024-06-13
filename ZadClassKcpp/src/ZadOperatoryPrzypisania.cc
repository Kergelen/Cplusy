#include "ZadOperatoryPrzypisania.h"
#include <iostream>

void OperatoryArytmetyczne() {
    int a = 10, b = 3;
    std::cout << "Operatory arytmetyczne:" << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;
    std::cout << "a + b = " << a + b << std::endl;  
    std::cout << "a - b = " << a - b << std::endl;  
    std::cout << "a * b = " << a * b << std::endl;  
    std::cout << "a / b = " << a / b << std::endl;  
    std::cout << "a % b = " << a % b << std::endl;  

    std::cout << std::endl;
}

void OperatoryPrzypisania() {
    int a = 10;
    std::cout << "Operatory przypisania:" << std::endl;

    std::cout << "a = 10: " << a << std::endl;

    a += 5;  
    std::cout << "a += 5: " << a << std::endl;

    a -= 3;  
    std::cout << "a -= 3: " << a << std::endl;

    a *= 2;
    std::cout << "a *= 2: " << a << std::endl;

    a /= 4;  
    std::cout << "a /= 4: " << a << std::endl;

    a %= 3;  
    std::cout << "a %= 3: " << a << std::endl;

    std::cout << std::endl;
}
