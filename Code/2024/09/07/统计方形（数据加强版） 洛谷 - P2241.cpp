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
    int n, m;
    std::cin >> n >> m;

    long long int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) a += (n - i) * (m - j);
            else b += (n - i) * (m - j);
        }
    }
    println("{} {}", a, b);
}

int main() {
    solve();
    return 0;
}