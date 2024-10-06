#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int n;
    std::cin >> n;

    if (n <= 1582) {
        std::cout << 0;
        return;
    }
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
        std::cout << 1;
        return;
    }
    std::cout << 0;
}

int main() {
    solve();
    return 0;
}