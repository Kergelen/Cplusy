#include "ZadClassExample.h"
#include <iostream>

Music::Music(const std::string& title, const std::string& artist, int year, const std::string& genre)
    : title(title), artist(artist), year(year), genre(genre) {}

void Music::Info() const {
    std::cout << "Nazwa: " << title << std::endl;
    std::cout << "Wykonawca: " << artist << std::endl;
    std::cout << "Rok: " << year << std::endl;
    std::cout << "Gatunek: " << genre << std::endl;
}

std::string Music::getTitle() const {
    return title;
}

void Music::setTitle(const std::string& newTitle) {
    title = newTitle;
}
