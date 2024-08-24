#include <bits/stdc++.h>

using namespace std;

void solve() {
    
}

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int idx{1};

    vector<int> v{1, 2, 4, 5, 6, 7};
    for (int i = 0; i != v.size(); i++) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';

    for (int i{0}; i != v.size(); i++) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';

    for (size_t i = v.size(); i--;) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';

    for (size_t i{v.size()}; i--;) {
        std::cout << v[i] << ' ';
    }

}