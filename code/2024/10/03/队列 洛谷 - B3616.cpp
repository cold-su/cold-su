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

    std::queue<int> queue;

    while (n--) {
        int a;
        std::cin >> a;

        if (a == 1) {
            int b;
            std::cin >> b;

            queue.push(b);
        } else if (a == 2) {
            if (queue.empty()) {
                std::cout << "ERR_CANNOT_POP\n";
                continue;
            } else {
                queue.pop();
            }
        } else if (a == 3) {
            if (queue.empty()) {
                std::cout << "ERR_CANNOT_QUERY\n";
                continue;
            }
            std::cout << queue.front() << "\n";
        } else if (a == 4) {
            std::cout << queue.size() << "\n";
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