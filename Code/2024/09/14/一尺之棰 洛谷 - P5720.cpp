#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())
#define int long long int

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int a;
    std::cin >> a;
    
    int i = 0;
    while (a > 1) {
        a /= 2;
        i++;
    }
    std::cout << i + 1;
}

signed main() {
    solve();
    return 0;
}