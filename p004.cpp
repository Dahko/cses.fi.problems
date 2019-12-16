#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

int main(int argc, char *argv[]) {
    size_t n = 0;
    std::cin >> n;
    if(n<1)
        return -1;
    unsigned long long sum = 0;
    unsigned prev;
    std::cin >> prev;
    for(size_t i=1; i<n; ++i) {
        unsigned cur;
        std::cin >> cur;
        if(cur < prev) {
            sum += prev-cur; // and now cur = prev
        } else {
            prev = cur;
        }
    }
    std::cout << sum;
    return 0;
}