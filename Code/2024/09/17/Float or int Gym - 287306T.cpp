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
    double n;
    std::cin >> n;

    std::string s = std::to_string(n), __s;
    int cnt = 0;
    bool is = false;
    for (char prev : s) {
        if (!is && prev == '.') {
            is = true;
            continue;
        } else if (is && prev == '0') {
            cnt++;
        }

        if (is) {
            __s += prev;
        }
    }
    if (cnt == 6) {
        println("int {}", (int)n);
    } else {
        println("float {} 0.{}", (int)n, __s.substr(0, 3));
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