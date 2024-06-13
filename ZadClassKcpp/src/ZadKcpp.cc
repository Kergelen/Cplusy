#include "ZadKcpp.h"
#include <iostream>

void ZadKcpp::task1_1() {

    std::string title, artist, genre;
    int year;
    std::cout << "Podaj tytul utworu: ";
    std::cin.ignore(); 
    std::getline(std::cin, title);
    std::cout << "Podaj wykonawce: ";
    std::getline(std::cin, artist);
    std::cout << "Podaj rok wydania: ";
    std::cin >> year;
    std::cout << "Podaj gatunek muzyczny: ";
    std::cin.ignore(); 
    std::getline(std::cin, genre);

    Music song(title, artist, year, genre);
    int choice;
    do {
        std::cout << "\n============================\n";
        std::cout << "MENU:\n";
        std::cout << "1. Wyswietl informacje o utworze\n";
        std::cout << "2. Zmien tytul utworu\n";
        std::cout << "3. Wyjdz z programu\n";
        std::cout << "Wybierz opcje: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "\nInformacje o utworze:\n";
                song.Info();
                break;
            case 2: {
                std::string newTitle;
                std::cout << "Podaj nowy tytul utworu: ";
                std::cin.ignore(); 
                std::getline(std::cin, newTitle);
                song.setTitle(newTitle);
                std::cout << "Tytul utworu zmieniony na: " << song.getTitle() << std::endl;
                break;
            }
            case 3:
                std::cout << "Koniec programu.\n";
                break;
            default:
                std::cout << "Niepoprawny wybor. Sprobuj ponownie.\n";
        }

    } while (choice != 3);
}

void ZadKcpp::task2_1() {
    int choice;
    int a;
    std::cout << "Wprowadz liczbe, ktora ma zostac pomnozona przez dwa" << std::endl;
    std::cin >> a;
    do {
        std::cout << "\n============================\n";
        std::cout << "MENU:\n";
        std::cout << "1. Przez wartosc\n";
        std::cout << "2. Przez referencje\n";
        std::cout << "3. Przez wskaznik\n";
        std::cout << "4. Przez tablice\n";
        std::cout << "5. Wyjdz z programu\n";
        std::cout << "Wybierz opcje: ";
        std::cin >> choice;

        int tablica[] = {1, 2, 3, 4, 5};

        switch (choice) {
            case 1: {
                int wartosc1 = PrzezWartosc(a);
                std::cout << "Wartosc zwracana przez wartosc(int x): " << wartosc1 << std::endl;
                break;
            }
            case 2: {
                PrzezReferencje(a);
                std::cout << "Wartosc zwracana przez referencje(int& x): " << a << std::endl;
                break;
            }
            case 3: {
                PrzezWskaznik(&a);
                std::cout << "Wartosc zwracana przez wskaznik(int* x): " << a << std::endl;
                break;
            }
            case 4: {
                PrzezTablice(tablica, 5);
                std::cout << "Wartosci zwracane przez tablice({1, 2, 3, 4, 5}): ";
                for (int i = 0; i < 5; ++i) {
                    std::cout << tablica[i] << " ";
                }
                std::cout << std::endl;
                break;
            }
            case 5:
                std::cout << "Koniec programu.\n";
                break;
            default:
                std::cout << "Niepoprawny wybor. Sprobuj ponownie.\n";
        }

    } while (choice != 5);
}

void ZadKcpp::task3_5() {
    int choice;
    do {
        std::cout << "\n============================\n";
        std::cout << "MENU:\n";
        std::cout << "1. Operatory Arytmetyczne\n";
        std::cout << "2. Operatory Przypisania\n";
        std::cout << "3. Wyjdz z programu\n";
        std::cout << "Wybierz opcje: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                OperatoryArytmetyczne();
                break;
            case 2:
                OperatoryPrzypisania();
                break;
            case 3:
                std::cout << "Koniec programu.\n";
                break;
            default:
                std::cout << "Niepoprawny wybor. Sprobuj ponownie.\n";
        }

    } while (choice != 3);
}

void ZadKcpp::task4_4() {
    int choice;
    do {
        std::cout << "\n============================\n";
        std::cout << "MENU:\n";
        std::cout << "1. Sprawdz parzystosc za pomoca operacji bitowych\n";
        std::cout << "2. Sprawdz parzystosc za pomoca modulo\n";
        std::cout << "3. Sprawdz parzystosc za pomoca operatora warunkowego\n";
        std::cout << "4. Wyjdz z programu\n";
        std::cout << "Wybierz opcje: ";
        std::cin >> choice;

        int number;
        if (choice != 4) {
            std::cout << "Podaj liczbe do sprawdzenia: ";
            std::cin >> number;
        }

        switch (choice) {
            case 1:
                std::cout << "a) Sprawdzenie operacja bitowa ((number & 1) == 0): " << (ParzystaBitowa(number) ? "Parzysta" : "Nieparzysta") << std::endl;
                break;
            case 2:
                std::cout << "b) Sprawdzenie modulo (number % 2 == 0): " << (ParzystaModulo(number) ? "Parzysta" : "Nieparzysta") << std::endl;
                break;
            case 3:
                std::cout << "c) Sprawdzenie z operatorem warunkowym((number % 2 == 0) ? true : false): " << (ParzystaOperatorWarunkowy(number) ? "Parzysta" : "Nieparzysta") << std::endl;
                break;
            case 4:
                std::cout << "Koniec programu.\n";
                break;
            default:
                std::cout << "Niepoprawny wybor. Sprobuj ponownie.\n";
        }

    } while (choice != 4);
}

void ZadKcpp::task5_2() {
    std::string name;
    int age;

    std::cout << "Podaj imie osoby: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Podaj wiek osoby: ";
    std::cin >> age;

    Person person(name, age);
    int choice;
    do {
        std::cout << "\n============================\n";
        std::cout << "MENU:\n";
        std::cout << "1. Wyswietl informacje o osobie\n";
        std::cout << "2. Zmien wiek osoby\n";
        std::cout << "3. Wyjdz z programu\n";
        std::cout << "Wybierz opcje: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                person.introduce();
                break;
            case 2: {
                int newAge;
                std::cout << "Podaj nowy wiek osoby: ";
                std::cin >> newAge;
                person.setAge(newAge);
                std::cout << "Wiek osoby zmieniony na: " << person.getAge() << std::endl;
                break;
            }
            case 3:
                std::cout << "Koniec programu.\n";
                break;
            default:
                std::cout << "Niepoprawny wybor. Sprobuj ponownie.\n";
        }

    } while (choice != 3);
}
