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
    std::string a, b, c;
    std::getline(std::cin, a);
    std::getline(std::cin, b);
    std::getline(std::cin, c);

    int cnt = 0, _cnt = 0, __cnt = 0;
    for (char i : a) {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') cnt++;
    }
    for (char i : b) {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') _cnt++;
    }
    for (char i : c) {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') __cnt++;
    }
    if (cnt == 5 && _cnt == 7 && __cnt == 5) {
        std::cout << "YES";
    } else std::cout << "NO";
}

signed main() {
    if (MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}