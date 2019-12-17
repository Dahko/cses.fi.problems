#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

/*
1   2   9   10  25  26
4   3   8   11  24  27
5   6   7   12  23  28
16  15  14  13  22  29
17  18  19  20  21  30
36  35  34  33  32  31

1   2   9   10  25  26
-3  +1  -1  +1  -1  +1
+1  +3  -1  +1  -1  +1
+11 -9  +5  +1  -1  +1 

(y, x)
(1,1) (1, 2) (2, 2) (2, 1) (3, 1) (3, 2) (3, 3) (2, 3) (1,3) (1, 4) (2, 4) (3, 4) (4, 4) (4, 3) (4,2) (4,1) (5,1)

1 -> 1
2 -> 2
3 -> 9
4 -> 10
x > y
v[1, x] = x%2==1 ? x^2 : (x-1)^2 + 1 
v[y, x] = v[1, x] + x%2==0 ? (y-1) : (1-y)
y > x
v[y, 1] = y%2==0 ? y^2 : (y+1)^2 - 1
v[y], x] = v[y,1] + y%2 == 1 ? (x-1) : (1-x)

*/

using ull = unsigned long long;

ull Calc(unsigned y, unsigned x) {
    if(x >= y) {
        ull s1 = x%2==1 ? ull(x)*x : ull(x-1)*(x-1) + 1;
        return x%2==0 ? s1 + y-1 : s1 + 1 - y; 
    } else {
        ull s1 = y%2==0 ? ull(y)*y : ull(y-1)*(y-1) + 1;
        return y%2==1 ? s1 + x - 1 : s1 + 1 - x;
    }

}


int main(int argc, char *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    size_t nTests = 0;
    std::cin >> nTests;
    for(size_t i=0; i<nTests; ++i) {
        unsigned y = 1, x = 1;
        std::cin >> y >> x;
        std::cout << Calc(y, x) << '\n';
    }
    return 0;
}