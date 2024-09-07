#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int n;
    while (std::cin >> n) {
        if (n == 42) return;
        std::cout << n << "\n";
    }
}

int main() {
    solve();
    return 0;
}