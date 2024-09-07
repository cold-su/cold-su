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
    std::cin >> n;

    int k = 1;
    int curr = 1;
    int prev = 1;

    int ans = 2;
    while (k < n) {
        k = curr + prev;
        prev = curr;
        curr = k;
        ans++;
        if (k > n) break;
    }
    std::cout << --ans << "\n" << k - curr + prev;
}

int main() {
    solve();
    return 0;
}