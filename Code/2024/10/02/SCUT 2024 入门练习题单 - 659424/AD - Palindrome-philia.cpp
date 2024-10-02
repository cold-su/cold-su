#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

/* MY SOLUTION */

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    std::string s;
    std::cin >> s;

    auto temp = s.substr(0, s.size() / 2);
    auto __temp = s.substr(s.size() / 2, s.size());

    int min = std::min(temp.size(), __temp.size());
    int cnt = 0;
    for (int i = 0; i < min; i++) {
        auto min_s = temp.size() > __temp.size() ? __temp : temp;
        auto long_s = temp.size() > __temp.size() ? temp : __temp;

        if (min_s[i] != long_s[long_s.size() - i - 1]) {
            cnt++;
        }

        // println("{} {} ?", min_s[i], long_s[long_s.size() - i - 1]);

    }
    std::cout << cnt;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}