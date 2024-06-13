#include <iostream>
using namespace std;

void printTablica(const int arr[], size_t rozmiar) {
    for (size_t i = 0; i < rozmiar; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    size_t rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    cout << "Tablica przed przekazaniem: ";
    printTablica(tablica, rozmiar);

    cout << "Tablica po przekazaniu: ";
    printTablica(tablica, rozmiar);

    return 0;
}
