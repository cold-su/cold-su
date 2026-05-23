int sumOfDigits(int* a, int n) {
    int min = 100;
    for (int i = 0; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    int p = 0;
    while (min > 0) {
        p += min % 10;
        min = min / 10;
    }
    return !(p & 1);
}