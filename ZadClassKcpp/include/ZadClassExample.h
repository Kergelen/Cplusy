#ifndef MUSIC_H
#define MUSIC_H

#include <string>

class Music {
private:
    std::string title;
    std::string artist;
    int year;
    std::string genre;

public:
    Music(const std::string& title, const std::string& artist, int year, const std::string& genre);
    void Info() const;
    std::string getTitle() const;
    void setTitle(const std::string& newTitle);
};

#endif
