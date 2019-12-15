#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int prev = '!';
    int c;
    size_t len = 0;
    size_t max = 0;
    do {
        c = fgetc(stdin);
        if (c == prev) {
            ++len;
        } else {
            if(len > max)
                max = len;
            len = 1;
            prev = c;
        }
    } while (c != EOF);
    std::cout << max;
    return 0;
}