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
    int n;
    std::cin >> n;
    std::vector<int> P(n), Q(n);
    for (int& i : P) {
        std::cin >> i;
    }
    for (int& i : Q) {
        std::cin >> i;
    }

    auto temp = P;
    std::ranges::sort(temp);
    std::vector<std::vector<int>> __temp;
    do {
        __temp.push_back(temp);
    } while (std::next_permutation(temp.begin(), temp.end()));

    int p = 0, q = 0;
    for (int i = 0; i < __temp.size(); i++) {
        if (P == __temp[i]) {
            p = i + 1;
        }

        if (Q == __temp[i]) {
            q = i + 1;
        }
    }

    std::cout << abs(q - p);
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}