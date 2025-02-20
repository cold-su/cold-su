class Solution {
public:
	vector<int> evenOddBit(int n) {
		int i = 0;
		std::vector<int> f(2);
		while (n) {
			f[i % 2] += n % 2 == 1;
			n /= 2;
			i++;
		}
		return f;
	}
};