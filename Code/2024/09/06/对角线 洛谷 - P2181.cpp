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
    unsigned long long n;
    std::cin >> n;
    unsigned long long ans = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
    std::cout << ans;
}

int main() {
    solve();
    return 0;
}