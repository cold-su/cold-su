#include <bits/stdc++.h>
using namespace std;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

int main(void) {
    vector<int> arr;
    for (int i = 0; i < 5; i++) {
        arr.push_back(i);
        arr.push_back(i);
        arr.push_back(i);
    }
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";
    auto it = std::unique(arr.begin(), arr.end());
    arr.resize(std::distance(arr.begin(), it));
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << " ";
    }

    int a = 8;
    int b = ~a;
    std::cout << "\n"
              << b + 1;
    return 0;
}