#include "ZadStruct.h"
#include <iostream>

void Person::introduce() const {
    std::cout << "Imie: " << name << ", wiek: " << age << std::endl;
}

void Person::setAge(int newAge) {
    age = newAge;
}

int Person::getAge() const {
    return age;
}
