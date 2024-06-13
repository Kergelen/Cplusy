#ifndef ZADSTRUCT_H
#define ZADSTRUCT_H
#include <string>

struct Person {
    std::string name;
    int age;

    void introduce() const;
    void setAge(int newAge);
    int getAge() const;

    Person(const std::string& n, int a) : name(n), age(a) {}
};

#endif
