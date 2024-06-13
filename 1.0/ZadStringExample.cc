#include <iostream>
#include <string>

using namespace std;

void demonstrateStringFunctions() {
    string text = "Crystal Castles";

    // empty()
    cout << "Pusty - " << (text.empty() ? "Tak" : "Nie") << endl;

    // size(), length()
    cout << "Ilosc znakow: " << text.size() << endl;

    // at()
    cout << "Znak o polozeniu 7: " << text.at(7) << endl;

    // clear()
    text.clear();
    cout << "Czy pusty po usunieciu? " << (text.empty() ? "Tak" : "Nie") << endl;

    text = "Crystal Castles";

    // erase(...)
    text.erase(7, 5);
    cout << "Po usunieciu (7,5): " << text << endl;

    text = "Crystal Castles";

    // find(...)
    size_t found = text.find("Crystal");
    if (found != string::npos) {
        cout << "Slowo 'Crystal' znaleziono na pozycji: " << found << endl;
    } else {
        cout << "Slowo 'Crystal' nie znaleziono" << endl;
    }

    // swap(...)
    string anotherText = "Diamond";
    cout << "Przed:\nText: " << text << "\nDiamond: " << anotherText << endl;
    text.swap(anotherText);
    cout << "Po:\nText: " << text << "\nDiamond: " << anotherText << endl;

    // substr(...)
    string sub = text.substr(1, 5);
    cout << "Podlancuch (1,5): " << sub << endl;

    text.append("Fortress");
    cout << "Po dodaniu: " << text << endl;
}

int main() {
    demonstrateStringFunctions();
    return 0;
}
