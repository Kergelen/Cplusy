#include <iostream>

using namespace std;

void Funkcja1() {
    int x = 10;
    int* p = &x;

    cout << "Wartosc x: " << x << endl;
    cout << "Adres x: " << &x << endl;
    cout << "Wartosc wskazywana przez p: " << *p << endl;
    cout << "Adres wskazywany przez p: " << p << endl << endl;

    // p++;
    cout << "p++;" << endl;
    p++;
    cout << "Wartosc wskazywana przez p: " << *p << endl;
    cout << "Adres wskazywany przez p: " << p << endl << endl;

    // ++p;
    p = &x; // Przywracamy oryginalny adres
    cout << "++p;" << endl;
    ++p;
    cout << "Wartosc wskazywana przez p: " << *p << endl;
    cout << "Adres wskazywany przez p: " << p << endl << endl;

    // ++*p;
    p = &x; // Przywracamy oryginalny adres
    cout << "++*p;" << endl;
    ++*p;
    cout << "Wartosc x: " << x << endl;
    cout << "Wartosc wskazywana przez p: " << *p << endl << endl;

    // ++(*p);
    x = 10; // Przywracamy oryginalną wartość x
    cout << "++(*p);" << endl;
    ++(*p);
    cout << "Wartosc x: " << x << endl;
    cout << "Wartosc wskazywana przez p: " << *p << endl << endl;

    // ++*(p);
    x = 10; // Przywracamy oryginalną wartość x
    cout << "++*(p);" << endl;
    ++*(p);
    cout << "Wartosc x: " << x << endl;
    cout << "Wartosc wskazywana przez p: " << *p << endl << endl;

    // *p++;
    x = 10; // Przywracamy oryginalną wartość x
    cout << "*p++;" << endl;
    cout << "Wartosc zwracana: " << *p++ << endl;
    cout << "Wartosc x: " << x << endl;
    cout << "Wartosc wskazywana przez p: " << *p << endl;
    cout << "Adres wskazywany przez p: " << p << endl << endl;

    // (*p)++;
    p = &x; // Przywracamy oryginalny adres
    cout << "(*p)++;" << endl;
    (*p)++;
    cout << "Wartosc x: " << x << endl;
    cout << "Wartosc wskazywana przez p: " << *p << endl << endl;

    // *(p)++;
    x = 10; // Przywracamy oryginalną wartość x
    cout << "*(p)++;" << endl;
    *(p)++;
    cout << "Wartosc x: " << x << endl;
    cout << "Wartosc wskazywana przez p: " << *p << endl << endl;

    // *++p;
    p = &x; // Przywracamy oryginalny adres
    int y = 20;
    cout << "*++p;" << endl;
    cout << "Wartosc zwracana: " << *++p << endl;
    cout << "Adres wskazywany przez p: " << p << endl << endl;

    // *(++p);
    p = &x; // Przywracamy oryginalny adres
    cout << "*(++p);" << endl;
    cout << "Wartosc zwracana: " << *(++p) << endl;
    cout << "Adres wskazywany przez p: " << p << endl << endl;
}

void Funkcja2() {
    int a = 0, b = 0, c = 0;
    int* p = &a, * q = &b, * r = &c;

    cout << "1. A, B, C: " << a << " " << b << " " << c << endl;

    *q = 10;
    cout << "2. A, B, C: " << a << " " << b << " " << c << endl;

    *r = 20;
    cout << "3. A, B, C: " << a << " " << b << " " << c << endl;

    *q = 30;
    cout << "4. A, B, C: " << a << " " << b << " " << c << endl;

    *p = 40;
    cout << "5. A, B, C: " << a << " " << b << " " << c << endl;

    (*q)++;
    cout << "6. A, B, C: " << a << " " << b << " " << c << endl;

    *(r)++;
    cout << "7. A, B, C: " << a << " " << b << " " << c << endl;

    ++(*q);
    cout << "8. A, B, C: " << a << " " << b << " " << c << endl;

    ++(*p);
    cout << "9. A, B, C: " << a << " " << b << " " << c << endl;

    (*q)++;
    cout << "10. A, B, C: " << a << " " << b << " " << c << endl;
}

int main() {
    Funkcja1();
    cout << endl << "Funkcja2:" << endl;
    Funkcja2();
    return 0;
}
