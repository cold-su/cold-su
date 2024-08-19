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

void solve() {
  int l, r, L, R;
  std::cin >> l >> r >> L >> R;
  r++;
  R++;

  if (r <= L || R <= l) {
    std::cout << 1 << "\n";
  } else {
    if (l > L) {
      std::swap(l, L);
    }
    if (r > R) {
      std::swap(r, R);
    }
    std::cout << std::min(r, R - 1) - std::max(l + 1, L) + 1 << "\n";
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}