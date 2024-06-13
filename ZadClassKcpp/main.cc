#include <iostream>
#include "ZadKcpp.h"

int main() {
    ZadKcpp zad;

    int choice;
    do {
        std::cout << "\n============================\n";
        std::cout << "MENU:\n";
        std::cout << "1. Wykonaj zadanie 1.1 (Klasa)\n";
        std::cout << "2. Wykonaj zadanie 2.1 (Zwracanie przez wartosc/referencje/wskaznik)\n";
        std::cout << "3. Wykonaj zadanie 3.5 (Operatory przypisania)\n";
        std::cout << "4. Wykonaj zadanie 4.4 (Parzysta/nieparzysta)\n";
        std::cout << "5. Wykonaj zadanie 5.2 (Struktura)\n";
        std::cout << "0. Wyjdz z programu\n";
        std::cout << "Wybierz opcje: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                zad.task1_1();
                break;
            case 2:
                zad.task2_1();
                break;
            case 3:
                zad.task3_5();
                break;
            case 4:
                zad.task4_4(); 
                break;
            case 5:
                zad.task5_2();
                break;
            case 0:
                std::cout << "Koniec programu.\n";
                break;
            default:
                std::cout << "Niepoprawny wybor. Sprobuj ponownie.\n";
        }

    } while (choice != 0);

    return 0;
}
