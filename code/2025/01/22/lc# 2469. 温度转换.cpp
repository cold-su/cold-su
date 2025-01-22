class Solution {
  public:
	vector<double> convertTemperature(double a) {
		return {a + 273.15, a * 1.80 + 32.00};
	}
};