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
    int h, r;
    std::cin >> h >> r;
    double k = h * pow(r, 2) * 3.14;
    int ans = ceil(20 * 10 * 10 * 10 / k);
    std::cout << ans;
}

int main() {
    solve();
    return 0;
}