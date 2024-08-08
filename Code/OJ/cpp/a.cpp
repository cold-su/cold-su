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
#define INF 1e9 + 7

using namespace std;

void read(vector<int> array) {
    for (auto prev : array) {
        std::cout << prev << end;
    }
    std::cout << endl;
}

void solve() {
}

int main() {
    IOS;
    int tc;
    std::cin >> tc;
    while (tc-- > 0) {
        solve();
    }
    return 0;
}
