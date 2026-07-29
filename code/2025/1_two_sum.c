/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n, int t, int* rn) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nums[i] + nums[j] == t) {
				int *arr = (int*) malloc(2 * sizeof(int));
				arr[0] = i;
				arr[1] = j;
				*rn = 2;
				return arr;
			}
		}
	}
	rn = 0;
	int *arr = (int*) malloc(0 * sizeof(int));
	return arr;
}
