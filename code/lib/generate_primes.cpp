std::vector<bool> generate_primes(int n) {
	std::vector<bool> res(n + 1);
	std::fill(res.begin(), res.end(), true);
	res[0] = res[1] = false;
	for (int i = 2; i < sqrt(n); i++) {
		if (res[i]) {
			for (int j = i * i; j <= n; j += i) {
				res[j] = false;
			}
		}
	}
	return res;
}