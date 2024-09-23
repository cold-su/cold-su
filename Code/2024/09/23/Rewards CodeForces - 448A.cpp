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
    int n = 3;
    std::vector<int> cups(n), medals(n);
    for (int& i : cups) {
        std::cin >> i;
        i *= 2;
    }
    for (int& i : medals) {
        std::cin >> i;
    }

    int m;
    std::cin >> m;

    int sumc = 0;
    for (int& i : cups) {
        sumc += i;
    }
    int a = std::ceil((double)sumc / 10);

    m -= a;

    int summ = 0;
    for (int& i : medals) {
        summ += i;
    }
    int b = std::ceil((double)summ / 10);
    m -= b;

    println("{}", m >= 0 ? "YES" : "NO");
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}