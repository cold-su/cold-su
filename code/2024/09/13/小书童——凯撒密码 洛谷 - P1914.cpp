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
    int n;
    string s;
    std::cin >> n >> s;
    for (char i : s) {
        int idx = i - ' ' - 64;
        int u = (idx + n) % 26;
        u = u == 0 ? 26 : u;
        std::cout << char(u + ' ' + 64);
    }
}

signed main() {
    solve();
    return 0;
}