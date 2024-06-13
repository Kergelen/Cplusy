#include <iostream>
#include <cstdlib>

using namespace std;

void functionA() {
    cout << "Funkcja A" << endl;
}

void functionB() {
    cout << "Funkcja B" << endl;
}

extern "C" void functionC() {
    cout << "Funkcja C" << endl;
}

extern "C" void functionD() {
    cout << "Funkcja D" << endl;
}

void functionE() {
    cout << "Funkcja E" << endl;
}

int main(int argc, char* argv[]) {
    cout << "Program ZadMainExample.cc" << endl;
    
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            string argument = argv[i];
            if (argument == "A") {
                functionA();
            } else if (argument == "B") {
                functionB();
            } else if (argument == "C") {
                functionC();
            } else if (argument == "D") {
                functionD();
            } else if (argument == "E") {
                functionE();
            } else {
                cout << "Nieznany argument: " << argument << endl;
            }
        }
    } else {
        cout << "Nie podano argumentow" << endl;
    }

    return 0;
}

