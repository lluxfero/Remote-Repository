#include "superprint.h"
#include <iostream>

void l2r(char** c, int n) {
    for (int i = 0; i < n; ++i, ++c) {
        for (int j = 0; j < i; ++j)
            std::cout << "\t";
        std::cout << *c << std::endl;
    }
}

void r2l(char** c, int n) {
    for (; n > 0; --n, ++c) {
        for (int j = 1; j < n; ++j)
            std::cout << "\t";
        std::cout << *c << std::endl;
    }
}
