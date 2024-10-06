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
    std::cin >> s;
    for (char i : s) {
        if ('a' <= i && i <= 'z') {
            std::cout << char(i - ' ');
        } else std::cout << i;
    }
}

signed main() {
    solve();
    return 0;
}