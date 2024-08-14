#include <bits/stdc++.h>
using namespace std;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

int main(void) {
    deque<int> a;
    for (int i = 0; i < 8; i++) {
        a.push_back(i);
    }
    a.pop_front();
    std::cout << a[2];
    // for (auto it = a.begin(); it != a.end(); it++) {
    //     std::cout << *it < " ";
    // }
    return 0;
}