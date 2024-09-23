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
    std::vector<int> nums1(n), nums2(n);

    for (int i = 0; i < n; i++) {
        std::cin >> nums1[i] >> nums2[i];
    }

    int cnt = 0, ans = 0;
    for (int i = 0; i < nums1.size(); i++) {
        if (nums1[i] == 0) {
            cnt++;
        }
        ans = std::min(cnt, n - cnt);
    }

    int _cnt = 0, _ans = 0;
    for (int i = 0; i < nums2.size(); i++) {
        if (nums2[i] == 0) {
            _cnt++;
        }
        _ans = std::min(_cnt, n - _cnt);
    }

    std::cout << ans + _ans << "\n";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}