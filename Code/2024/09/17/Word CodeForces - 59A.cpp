#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

const bool MULTIPLE_TESTCASES = false;

void solve() {
    std::string s;
    std::cin >> s;

    int cnt = 0, __cnt = 0;;
    for (char i : s) {
        if ('a' <= i && i <= 'z') {
            cnt++;
        } else __cnt++;
    }

    if (cnt >= __cnt) {
        for (char i : s) {
            if ('A' <= i && i <= 'Z') {
                std::cout << char(i + 32);
            } else std::cout << i;
        }
    } else {
        for (char i : s) {
            if ('a' <= i && i <= 'z') {
                std::cout << char(i - 32);
            } else std::cout << i;
        }
    }
}

signed main() {
    if (MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}