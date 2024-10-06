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

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n;
    std::cin >> n;

    std::vector<std::string> res(n);
    for (auto& i : res)
        std::cin >> i;
    
    int ans = 0;
    for (int i = 0; i < res[0].size(); i++) {
        bool is = true;
        for (int j = 0; j + 1 < res.size(); j++) {
            if (res[j][i] != res[j + 1][i])
                is = false;
        }
        if (!is) {
            ans = i;
            break;
        }
    }
    std::cout << ans;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}
