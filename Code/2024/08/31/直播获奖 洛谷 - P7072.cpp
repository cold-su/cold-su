#include <bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<int> a;
    priority_queue<int, vector<int>, greater<int>> b;
 
    int n, w;
    std::cin >> n >> w;

    for (int i = 1; i <= n; i++) {
        int t;
        std::cin >> t;

        if (b.empty() || t > b.top()) b.push(t);
        else a.push(t);

        int k = std::max(1, i * w / 100);

        while (b.size() > k) {
            a.push(b.top());
            b.pop();
        }
        while (b.size() < k) {
            b.push(a.top());
            a.pop();
        }

        std::cout << b.top() << " ";
    }
}