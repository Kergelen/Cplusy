#include <iostream>
#include <cmath>

using namespace std;

int convertBinaryArrayToDecimal(int binaryArray[], int size) {
    int decimalNumber = 0;
    int power = 0;

    for (int i = size - 1; i >= 0; i--) {
        if (binaryArray[i] == 1) {
            decimalNumber += pow(2, power);
        }
        power++;
    }

    return decimalNumber;
}

int main() {
    int binaryArray[8];
    cout << "Wprowadz 8 cyfr (0 lub 1): ";

    for (int i = 0; i < 8; i++) {
        cin >> binaryArray[i];
    }

    int decimalNumber = convertBinaryArrayToDecimal(binaryArray, 8);
    cout << "Liczba dziesietna: " << decimalNumber << endl;

    return 0;
}