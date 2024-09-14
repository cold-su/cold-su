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
    string s;
    int n, x;
    std::cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        s += to_string(i);
    }

    int cnt = 0;
    for (char i : s) {
        if (i - '0' == x) cnt++;
    }
    std::cout << cnt;
}

signed main() {
    solve();
    return 0;
}