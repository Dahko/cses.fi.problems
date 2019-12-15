#include <iostream>

int main(int argc, char *argv[]) {
    long long i = 0;
    std::cin >> i;
    std::cout << i;
    while( i > 1 ) {
        if(i % 2 == 0)
            i /= 2;
        else
            i = 3 * i + 1;
        std::cout << " " << i;
    }
    return 0;
}