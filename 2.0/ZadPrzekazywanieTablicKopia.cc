#include <iostream>
using namespace std;

void przekazKopieTablicy(int kopiaTablicy[], int rozmiar) {
    cout << "Kopia tablicy w funkcji:\n";
    for (int i = 0; i < rozmiar; ++i) 
    {
        cout << kopiaTablicy[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    cout << "Oryginalna tablica:\n";

    for (int i = 0; i < rozmiar; ++i) 
    {
        cout << tablica[i] << " ";
    }
    cout << endl;

    przekazKopieTablicy(tablica, rozmiar);

    return 0;
}
