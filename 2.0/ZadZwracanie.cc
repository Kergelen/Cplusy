#include <iostream>
using namespace std;

int PrzezWartosc(int x) 
{
    return x * 2;
}

void PrzezReferencje(int& x) 
{
    x *= 2;
}

void PrzezWskaznik(int* x) 
{
    *x *= 2;
}

void PrzezTablice(int tablica[], int rozmiar) 
{
    for (int i = 0; i < rozmiar; ++i) 
    {
        tablica[i] *= 2;
    }
}

int main() 
{
    int a = 5;
    int b = 5;
    int c = 5;
    int tablica[] = {1, 2, 3, 4, 5};

    int wartosc1 = PrzezWartosc(a);
    cout << "Wartosc zwracana przez wartosc: " << wartosc1 << endl;

    PrzezReferencje(b);
    cout << "Wartosc zwracana przez referencje: " << b << endl;

    PrzezWskaznik(&c);
    cout << "Wartosc zwracana przez wskaznik: " << c << endl;

    PrzezTablice(tablica, 5);
    cout << "Wartosci zwracane przez tablice: ";
    for (int i = 0; i < 5; ++i) 
    {
        cout << tablica[i] << " ";
    }
    cout << endl;
    return 0;
}
