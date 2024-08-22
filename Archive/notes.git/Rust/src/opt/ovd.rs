//! # 功能性方法集合包
//!

#![allow(dead_code, unused)]

use core::num;
use std::sync::mpsc::RecvTimeoutError;

/// # 三倍数与五倍数函数
/// 迭代器。
/// # Examples：
/// ```rust
/// use opt::ovd;
///
/// let arr = ovd::fizz_fuzz(30);
/// println!("{arr:?}");
/// ```
pub fn fizz_buzz(n: i32) -> Vec<String> {
    (1..n + 1)
        .map(|i| match (i % 3 == 0, i % 5 == 0) {
            (true, false) => "三倍数".to_string(),
            (false, true) => "五倍数".to_string(),
            (true, true) => "既是三倍也是五倍数".to_string(),
            _ => i.to_string(),
        })
        .collect()
}

/// # 三倍数与五倍数函数的第二种方法
/// 使用模式匹配和条件判断。
/// # Examples：
/// ```rust
/// use opt::ovd;
///
/// let arr = ovd::fizz_buzz_b(30);
/// println!("{arr:?}");
/// ```
pub fn fizz_buzz_b(n: i32) -> Vec<String> {
    let mut ans = Vec::<String>::new();
    for i in 1..n + 1 {
        match i {
            _ if 0 == i % 3 && 0 == i % 5 => ans.push("既是三倍也是五倍数".to_string()),
            _ if 0 == i % 3 => ans.push("三倍数".to_string()),
            _ if 0 == i % 5 => ans.push("五倍数".to_string()),
            _ => ans.push(i.to_string()),
        }
    }
    ans
}

// TODO
fn _number_of_steps(num: i32) -> i32 {
    // O(log W) W=32
    // O(1)
    match num {
        0 => 0,
        // _ => (2 * num.count_ones() + num.count_zeros() - num.leading_zeros() - 1) as i32,
        // _ => (31 - num.leading_zeros() + num.count_ones()) as i32,
        _ => (32 - num.leading_zeros() - 1 + num.count_ones()) as i32,
    }
}

// TODO
fn _is_power_of_two(n: i32) -> bool {
    match n {
        _ if (n & (n - 1) == 0 && n != 0) => true,
        _ => false,
    }
}

/// # 位1的个数(汉明重量)
/// 返回该数在二进制中 1 的个数。
/// # Examples
/// ```rust
/// use opt::ovd;
///
/// let n = haming_weight(3);   // 3 在二进制中表示为 11
/// assert_eq!(n, 2);           // 因此返回 2
/// ```
pub const fn hamming_weight(n: u32) -> i32 {
    n.count_ones() as i32
}

/// 返回二维数组中的最大和
/// # Examples
/// ```rust
/// use opt::ovd;
///
/// let arr = vec![vec![1, 2], vec![3, 4]];
/// assert_eq!(7, ovd::max_tarr(&arr));
/// ```
pub fn max_tarr(array: &Vec<Vec<i32>>) -> i32 {
    array.iter().map(|i| i.iter().sum()).max().unwrap()
}

/// 返回二维数组中的最小和
/// # Examples
/// ```rust
/// use opt::ovd;
///
/// let arr = vec![vec![1, 2], vec![3, 4]];
/// assert_eq!(3, ovd::min_tarr(&arr));
/// ```
pub fn min_tarr(array: &Vec<Vec<i32>>) -> i32 {
    array.iter().map(|i| i.iter().sum()).min().unwrap()
}

/// # Goal 解释器
fn interpret(command: String) -> String {
    command
        .replacen("()", "o", command.len())
        .replacen("(al)", "al", command.len())
    // replece 替换
}

pub fn move_zeroes(nums: &mut Vec<i32>) {
    let (mut i, mut j) = (0, 0);
    while j < nums.len() {
        if nums[j] != 0 {
            nums.swap(i, j);
            i += 1
        }
        j += 1
    }
}

/// 阶乘
pub fn factorial(nums: usize) -> usize {
    if nums <= 1 {
        return 1;
    }
    nums * factorial(nums - 1)
}

/// 斐波那契数列
pub fn fibonacci(n: usize) -> usize {
    match n {
        0 => return 0,
        1 => return 1,
        _ => return fibonacci(n - 1) + fibonacci(n - 2),
    }
}

pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
    nums.dedup();
    nums.len() as i32
}

// pub fn roman_to_int(s: String) -> i32 {
//     let i = 10;
//     0
// }

pub fn sort_array_by_parity(nums: Vec<i32>) -> Vec<i32> {
    // 存偶数。
    let mut ev = vec![];
    // 存奇数。
    let mut od = vec![];
    // 对号入座，筛出奇偶。
    for i in 0..nums.len() {
        if 0 == nums[i] % 2 {
            ev.push(nums[i])
        } else {
            od.push(nums[i])
        }
    }
    // 拼接即可。
    ev.append(&mut od);
    ev
}

pub fn can_construct(ransom_note: String, magazine: String) -> bool {
    let od: Vec<&str> = magazine.matches(&ransom_note).collect();
    match 0 < od.len() {
        true => true,
        false => false,
    }
}

pub fn search(nums: Vec<i32>, target: i32) -> i32 {
    nums.binary_search(&target).map_or(-1, |x| x as i32)
}

pub fn reverse(text: &str) -> String {
    text.chars().rev().collect()
}

pub fn search_insert(nums: Vec<i32>, target: i32) -> i32 {
    use std::cmp::Ordering;
    let mut left = 0;
    let mut right = nums.len();
    // 二分查找。
    while left < right {
        let mut mid = left + (right - left) / 2;
        match target.cmp(&nums[mid]) {
            Ordering::Less => right = mid,
            Ordering::Equal => return mid as i32, // 返回答案。
            Ordering::Greater => left = mid + 1,
        }
    }
    // 找不到。假如将target按顺序插入nums中，
    // 那么left就是它的位置。
    left as i32
}

pub fn contains_duplicate(nums: Vec<i32>) -> bool {
    use std::collections::HashSet;
    let mut set = HashSet::new();
    nums.iter().any(|&x| !set.insert(x))
}

pub fn rotate(nums: &mut Vec<i32>, k: i32) {
    let k = nums.len() - k as usize % nums.len();
    nums[..k].reverse();
    nums[k..].reverse();
    nums.reverse()

    // let i=nums.len() as i32;
    // nums.rotate_right(k.rem_euclid(i) as usize)
}

mod closest_nodes_queries_in_a_binary_search_tree {
    #[derive(Debug, PartialEq, Eq)]
    pub struct TreeNode {
        pub val: i32,
        pub left: Option<Rc<RefCell<TreeNode>>>,
        pub right: Option<Rc<RefCell<TreeNode>>>,
    }

    impl TreeNode {
        #[inline]
        pub fn new(val: i32) -> Self {
            TreeNode {
                val,
                left: None,
                right: None,
            }
        }
    }

    use std::cell::RefCell;
    use std::rc::Rc;
    pub fn closest_nodes(root: Option<Rc<RefCell<TreeNode>>>, queries: Vec<i32>) -> Vec<Vec<i32>> {
        todo!()
    }
}

// pub fn max_power(s: String) -> i32 {
//     use std::collections::HashMap;
//     let mut map: HashMap<char, i32> = HashMap::new();
//     let mut ans=0;
//     for (i, items) in s.chars().enumerate() {
//         if map.get(&items) == None {
//             map.insert(items, i as i32);
//         }
//         if map.get(item){
//             ans+=1;
//         }

//     }
//     todo!()
// }
