#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    priority_queue<int, vector<int>, greater<int>> pri;
    for (int i = 0; i < n; i++) {
        int _;
        std::cin >> _;
        pri.push(_);
    }
    int ans = 0;
    while (pri.size() > 1) {
        int a = pri.top();
        pri.pop();
        int b = pri.top();
        pri.pop();
        ans += a + b;
        pri.push(a + b);
    }
    std::cout << ans;
    return 0;
}