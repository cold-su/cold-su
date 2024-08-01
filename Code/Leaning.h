// 搜索

inline int querySearch(int arr[], int len, int target) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
    // 这样子写的话，可以是可以，但是也有一些缺陷
    // 这个函数只能找到第一个target，只能在一个数字不重复的数组里面找
    // 要想找第二个、第三个target就很难受了
    // TODO 在存在重复数字的数组里，找出全部的target
    // TODO 无需传入len，在函数内部算出长度
}
