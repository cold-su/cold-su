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
    std::string a, b;
    std::cin >> a >> b;

    int cnt = 0, __cnt = 0;
    for (char& i : a) {
        if ('a' <= i && i <= 'z') {
            cnt += i;
        } else {
            cnt += i + 32;
            i += 32;
        }
    }

    for (char& i : b) {
        if ('a' <= i && i <= 'z') {
            __cnt += i;
        } else {
            __cnt += i + 32;
            i += 32;
        }
    }

    if (cnt == __cnt) {
        if (a != b) {
            goto pos;
        } else std::cout << (a > b);
    } else {
        pos:;
        std::cout << (a > b ? "1" : "-1");
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