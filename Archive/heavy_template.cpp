#include <bits/stdc++.h>/* -std=gnu++2a */

/**
 * How-to-use:
 * 
 * println("Hello {} {}", "World", "!");
 * 
 * println("Hello {:.2f}", 3.1415);
 */
#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

namespace yzr {
    inline void __read(int &x) {
        char c;
        do {
            c = getchar();
        } while (c == ' ' || c == '\n');
        x = 0;
        int w = 1;
        if (c == '-') {
            w = -1;
            c = getchar();
        }
        do {
            x = (x << 1) + (x << 3) + c - '0';
            c = getchar();
        } while (c != ' ' && c != '\n');
        x *= w;
    }

    /**
     * How-to-use
     *
     * int a, b, c;
     * read(a, b, c);
     */
    template<typename type,typename ...T>
    void read(type &x,T&...y) {
        __read(x), __read(y...);
    }
};

void solve() {

}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}