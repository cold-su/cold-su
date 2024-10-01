#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())

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

    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }

    std::string ans = std::to_string(sum);
    std::vector<std::string> temp = {"ling", "yi", "er", "san", "si", "wu", "liu"
                                    , "qi", "ba", "jiu"};
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == '.')
            break;
        std::cout << temp[ans[i] - '0'];
        if (i != ans.size() - 1)
            std::cout << " ";
        else 
            continue;
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