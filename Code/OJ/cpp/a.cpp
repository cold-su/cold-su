#include <bits/stdc++.h>
#define endl "\n"
#define IOS                           \
    std::ios::sync_with_stdio(false); \
    std::cin.tie(0);                  \
    std::cout.tie(0);
#define INF 1e9 + 7

using namespace std;
int main() {
    IOS;
    int t;
    std::cin >> t;
    std::map<int, int> Map;
    std::map<int, int>::iterator it;
    for (int i = 0; i < t; i++) {
        Map[i]++;
    }
    for (it = Map.begin(); it != Map.end(); it++) {
        std::cout << it->first << " " << it->second << endl;
    }
    for (auto [key, val] : Map) {
        std::cout << key << " " << val << endl;
    }
    auto n = find();
    return 0;
}
