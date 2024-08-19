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

class Solution {
public:
  string getSmallestString(string s) {
    for (int i = 0; i < s.length() - 1; i++) {
      if (s[i] > s[i + 1] && (s[i] % 2 == s[i + 1] % 2) && s[i] > s[i + 1]) {
        std::swap(s[i], s[i + 1]);
        break;
      }
    }
    return s;
  }
};