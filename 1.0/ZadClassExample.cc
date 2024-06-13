#include <iostream>
#include <string>
using namespace std;

class Music {
    private:
        string title;
        string artist;
        int year;
        string genre;

    public:
        Music(const string& title, const string& artist, int year, const string& genre) 
            : title(title), artist(artist), year(year), genre(genre) {}

        void Info() const {
            cout << "Nazwa: " << title << endl;
            cout << "Wykonawca: " << artist << endl;
            cout << "Rok: " << year << endl;
            cout << "Genre: " << genre << endl;
        }
        string getTitle() { return title; } 
        void setTitle(const string& newTitle) { title = newTitle; }
};

int main() {
    Music song("Char", "Crystal Castles", 2016, "Electric Music");
    song.Info();
    cout << "--Test getTitle--" << endl;
    cout << song.getTitle() << endl;
    song.setTitle("Fleece");
    cout << "--Test getTitle--" << endl;
    cout << song.getTitle() << endl;

    return 0;
}
