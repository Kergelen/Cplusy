#include "ZadZwracanie.h"

int PrzezWartosc(int x) {
    return x * 2;
}

void PrzezReferencje(int& x) {
    x *= 2;
}

void PrzezWskaznik(int* x) {
    *x *= 2;
}

void PrzezTablice(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        tablica[i] *= 2;
    }
}
