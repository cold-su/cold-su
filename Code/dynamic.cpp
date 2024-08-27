#include <bits/stdc++.h>

using namespace std;

struct __president {
	int idx;
	string vote;

	bool operator<(const __president b) const {
		if (vote.length() != b.vote.length()) {
			return vote.length() > b.vote.length();
		}
		return vote > b.vote;
	}
};

int main() {
    int n;
    std::cin >> n;

    vector<__president> res(n);
    for (int i = 0; i < n; i++) {
    	res[i].idx = i + 1;
    	std::cin >> res[i].vote;
    }
    std::sort(res.begin(), res.end());
    std::cout << res[0].idx << "\n" << res[0].vote;
    return 0;
}