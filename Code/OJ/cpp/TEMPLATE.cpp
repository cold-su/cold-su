#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>

#define endl "\n"
#define end " "
#define IOS                           \
    std::ios::sync_with_stdio(false); \
    std::cin.tie(0);                  \
    std::cout.tie(0);

void read(std::vector<int> array) {
    for (auto prev : array) {
        std::cout << prev << " ";
    }
    std::cout << endl;
}

void solve() {
}

int main() {
    IOS;
    int n;
    std::cin >> n;
    while (n-- > 0) {
        solve();
    }
    return 0;
}
