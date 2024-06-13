#include "ZadParzysta.h"

bool ParzystaBitowa(int number) {
    return (number & 1) == 0;
}

bool ParzystaModulo(int number) {
    return number % 2 == 0;
}

bool ParzystaOperatorWarunkowy(int number) {
    return (number % 2 == 0) ? true : false;
}
