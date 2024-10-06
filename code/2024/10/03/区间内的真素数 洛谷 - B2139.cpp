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

bool is_prime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void solve() {
    int l, r;
    std::cin >> l >> r;

    std::vector<int> ans;
    for (int i = l; i <= r; i++) {
        if (is_prime(i)) {

            auto s = std::to_string(i);
            std::reverse(s.begin(), s.end());

            if (is_prime(std::stoi(s))) {
                ans.push_back(i);
            }
        }
    }
    if (ans.size() == 0) {
        std::cout << "No";
        return;
    }
    std::ranges::sort(ans);
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i];
        if (i != ans.size() - 1) {
            std::cout << ",";
        }
    }
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}