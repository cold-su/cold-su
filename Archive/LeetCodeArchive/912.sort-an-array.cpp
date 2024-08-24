/*
 * @lc app=leetcode id=912 lang=cpp
 *
 * [912] Sort an Array
 */

// @lc code=start
class Solution {
   public:
    vector<int> sortArray(vector<int>& nums) {  // 堆排序
        // 初始化，i從最後一個父節點開始調整
        for (int i = nums.size() / 2 - 1; i >= 0; i--)
            heapify(nums, i, nums.size() - 1);
        // 先將第一個元素和已经排好的元素前一位做交換，再從新調整(刚调整的元素之前的元素)，直到排序完畢
        for (int i = nums.size() - 1; i > 0; i--) {
            std::swap(nums[0], nums[i]);
            heapify(nums, 0, i - 1);
        }
        return nums;
    }

   private:
    void heapify(vector<int>& arr, int start, int end) {
        // 建立父節點指標和子節點指標
        int dad = start;
        int son = dad * 2 + 1;
        while (son <= end) {  // 若子節點指標在範圍內才做比較
            if (son + 1 <= end &&
                arr[son] < arr[son + 1])  // 先比較兩個子節點大小，選擇最大的
                son++;
            if (arr[dad] >
                arr[son])  // 如果父節點大於子節點代表調整完畢，直接跳出函數
                return;
            else {  // 否則交換父子內容再繼續子節點和孫節點比較
                std::swap(arr[dad], arr[son]);
                dad = son;
                son = dad * 2 + 1;
            }
        }
    }
};
// @lc code=end
