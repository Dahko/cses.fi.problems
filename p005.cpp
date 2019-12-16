#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

/*
1 - no
1 2 - no
1 2 3 - no
1 2 3 4 - 3 1 4 2 
1 2 3 4 5 - 3 1 4 2 5 / 1 3 5 2 4
1 2 3 4 5 6 - 6 3 1 4 2 5 / 1 3 5 2 4 6


*/

int main(int argc, char *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


    size_t n = 0;
    std::cin >> n;
    if(n<1)
        return -1;
    if (n == 1) {
        std::cout << 1;
        return 0;
    }
    if(n < 4) {
        std::cout << "NO SOLUTION";
        return 0;
    }
    if(n == 4) {
        std::cout << "3 1 4 2";
        return 0;
    }

    std::cout << 1;
    for(size_t i = 3; i <= n; i+=2)
        std::cout << " " << i;
    for(size_t i = 2; i <= n; i+=2)
        std::cout << " " << i;
    return 0;
}