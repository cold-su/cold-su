//! # The New Resu Standard Rust Mod（Resu新标准Rust模组）
//!
//! 这个模组自定义了一些扩展方法（~~虽然很垃圾~~）。并且拥有十分丰富（大嘘）的文档。

#![allow(dead_code, unused)]
use device_query::{DeviceQuery, DeviceState, Keycode};
use std::{
    thread,
    time::{Duration, Instant},
};

/// 标准输出一个变量。
///
/// 别这样用： `fun::o("Hello world");`
/// # Examples:
/// ```rust
/// use opt::fun;
///
/// let arr = vec![1, 2, 3, 4];
/// fun::o(&arr);
/// ```
pub fn o<T: std::fmt::Debug>(__print: &T) -> () {
    println!("{__print:?}")
}

/// 标准输出一个变量，后随一个新空行。
///
/// 别这样用： `fun::ol("Hello world");`
/// # Examples:
/// ```rust
/// use opt::fun;
///
/// let arr = vec![1, 2, 3, 4];
/// fun::ol(&arr);
/// ```
pub fn ol<T: std::fmt::Debug>(print: T) -> () {
    println!("{print:?}")
}

/// 输出一个 `Hello, world!`。
///
/// 一切的开始，不是么？
pub fn hello_world() -> () {
    print!("Hello, world!");
}

/// 输出一个 `Hello, world!`，后随一个新空行。
///
/// 一切的开始，不是么？
pub fn hello_worldln() -> () {
    println!("Hello, world!");
}

/// 让当前线程休眠，单位毫秒。
///
/// 只是个快捷方式。
///
/// # Examples
/// ```rust
/// use opt::fun;
///
/// //休眠 100 毫秒。
/// fun::sleep(100);
/// ```
pub fn sleep(millis: u64) -> () {
    thread::sleep(Duration::from_millis(millis));
}

/// System pause(仿) 的快捷方式。详见：[wait_text_add]
///
/// 默认传入 `"按下任意键以继续..."`
///
/// # Examples
/// ```rust
/// use opt::fun;
///
/// fun::wait();
/// ```
pub fn wait() -> () {
    self::wait_text_add("按下任意键以继续...")
}

/// System pause(仿)
///
/// 堵塞当前线程（`loop`），直到监听到键盘输入。
///
/// ~~不知为何，该方法只有效运行一次。~~ 已解决。用`sleep`让其睡一会，
/// 不然下一轮听监会马上开始，导致问题出现。原因不明。
///
/// # Examples
/// ```rust
/// use opt::fun;
///
/// fun::wait_text_add("按下任意键以继续...");
/// ```
pub fn wait_text_add(__text: &str) -> () {
    self::sleep(100);
    println!("{__text}");
    loop {
        if 0 < DeviceState::new().get_keys().len() {
            break;
        }
    }
}
