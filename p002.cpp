#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]) {
    size_t nMax = 2;
    std::cin >> nMax;
    if(nMax > 200000)
        return -1;
    std::vector<bool> bOk(nMax, false);
    for(size_t i = 0; i<nMax-1; ++i) {
        size_t v;
        std::cin >> v;
        if(v<1)
            return -1;
        bOk[v-1] = true;
    }
    std::cout << std::distance(bOk.begin(), std::find(bOk.begin(), bOk.end(), false)) + 1;
    return 0;
}