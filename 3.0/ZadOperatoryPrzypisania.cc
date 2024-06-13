#include <iostream>
using namespace std;

void OperatoryArytmetyczne() {
    int a = 10, b = 3;
    cout << "Operatory arytmetyczne:" << endl;

    cout << "a + b = " << a + b << endl;  
    cout << "a - b = " << a - b << endl;  
    cout << "a * b = " << a * b << endl;  
    cout << "a / b = " << a / b << endl;  
    cout << "a % b = " << a % b << endl;  

    cout << endl;
}

void OperatoryPrzypisania() {
    int a = 10;
    cout << "Operatory przypisania:" << endl;

    cout << "a = 10: " << a << endl;

    a += 5;  
    cout << "a += 5: " << a << endl;

    a -= 3;  
    cout << "a -= 3: " << a << endl;

    a *= 2;
    cout << "a *= 2: " << a << endl;

    a /= 4;  
    cout << "a /= 4: " << a << endl;

    a %= 3;  
    cout << "a %= 3: " << a << endl;

    cout << endl;
}

int main() {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
    return 0;
}
