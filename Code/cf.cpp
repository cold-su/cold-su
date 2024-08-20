#include <bits/stdc++.h>
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

void solve()
{
    int n;
    std::cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    vector<int> cnt(*max_element(arr.begin(), arr.end()) + 1, 0);
    for (int i = 0; i < arr.size(); i++) {
        cnt[arr[i]] += 1;
    }
    std::cout << n - *max_element(cnt.begin(), cnt.end()) << "\n";
}

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}