#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

using i32 = int;
using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

int main() {
    int n, m;
    std::cin >> n >> m;
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        std::cin >> res[i];
    }

    vector<int> temp(m);
    for (int i = 0; i < m; i++) {
        std::cin >> temp[i];
    }

    vector<int> ans(m);
    for (int i = 0; i < m; i++) {
        int left = 0;
        int right = n - 1;
        while (left <= right) {
            // println("{} {}", left, right);
            int mid = left + (right - left) / 2;
            if (res[mid] >= temp[i]) right = mid - 1;
            else left = mid + 1;
        }

        if (res[left] == temp[i]) ans[i] = ++left;
        else ans[i] = -1;

    }

    for (int prev : ans) {
        std::cout << prev << " ";
    }
    return 0;
}