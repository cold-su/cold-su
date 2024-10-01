extern "C" int Seniorious(int x);

extern "C" int Chtholly(int n, int c) {
    int left = 1, right = n;

    int ans = left;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        int ret = Seniorious(mid);
        if (ret == 1) {
            right = mid - 1;
        } else if (ret == -1) {
            left = mid + 1;
        } else if (ret == 0) {
            ans = mid;
            break;
        }
    }
    return ans;
}