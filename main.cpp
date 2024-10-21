#include <iostream>
#include "superprint.h"

#define N 5

int main() {
    char strs[N][10];
    char* p[N];

    for (int i = 0; i < N; ++i) {
        std::cin >> strs[i];
        p[i] = strs[i];
    }

    l2r(p, N);
    r2l(p, N);

    return 0;
}
