#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::cin.unsetf(std::ios::skipws);
    return nullptr;
} ();

void solve() {
    char __char;
    bool flag = true;
    while (std::cin >> __char and __char != EOF) {
        if (__char == '"') {
            if (flag == true) {
                std::cout << "``";
            } else {
                std::cout << "''";
            }
            flag = !flag;
        } else {
            std::cout << __char;
        }
    }
}

int main() {
    solve();
    return 0;
}