//！ 算法与数据结构模组

#![allow(dead_code, unused)]

/// # 两数交换
/// 将一个数组的 left 端和 right 端相交换。下标从 0 开始。
///
/// # Examples
/// ```rust
/// use opt::sort;
///
/// let mut arry = vec![1, 2, 3, 4];
/// arry = sort::swap(arry, 0, 2);
///
/// assert_eq!(arry, [3, 2, 1, 4]);
/// ```
pub fn swap(mut vec: Vec<isize>, left: usize, right: usize) -> Vec<isize> {
    vec[left] = vec[left] ^ vec[right];
    vec[right] = vec[left] ^ vec[right];
    vec[left] = vec[left] ^ vec[right];
    vec
}
/// # 二分查找
pub fn binary_search<T>(arr: &Vec<T>, target: &T) -> Option<usize>
where
    T: Ord,
{
    use std::cmp::Ordering;
    let mut left = 0;
    let mut right = arr.len();
    while left < right {
        let mut mid = left + (right - left) / 2;
        match target.cmp(&arr[mid]) {
            Ordering::Less => right = mid,
            Ordering::Greater => left = mid + 1,
            Ordering::Equal => return Some(mid),
        }
    }
    None
}

#[test]
fn _test() {}
