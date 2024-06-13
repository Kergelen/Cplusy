#include <iostream>

enum class Month {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    Month currentMonth = Month::April;

    switch (currentMonth) {
        case Month::January:
            std::cout << "January\n";
            break;
        case Month::February:
            std::cout << "February\n";
            break;
        case Month::March:
            std::cout << "March\n";
            break;
        case Month::April:
            std::cout << "April\n";
            break;
        case Month::May:
            std::cout << "May\n";
            break;
        case Month::June:
            std::cout << "June\n";
            break;
        case Month::July:
            std::cout << "July\n";
            break;
        case Month::August:
            std::cout << "August\n";
            break;
        case Month::September:
            std::cout << "September\n";
            break;
        case Month::October:
            std::cout << "October\n";
            break;
        case Month::November:
            std::cout << "November\n";
            break;
        case Month::December:
            std::cout << "December\n";
            break;
    }

    return 0;
}
