#

```rust
enum Proj {
    Coding(bool),
    Reading(bool),
    Writing(bool),
    FocusOnLearning(bool),
    ToSleepAtTime(bool),
}
impl Proj {
    fn behavir(thought: Self) -> String {
        match thought {
            Proj::Coding(true) => "😢又是没能力却硬推项目的一天".to_string(),
            Proj::Reading(true) => "🥰做阅读理解了，真好".to_string(),
            Proj::Writing(true) => "😎开始写作了，不错".to_string(),
            Proj::FocusOnLearning(true) => "✍️专注学习！".to_string(),
            Proj::ToSleepAtTime(true) => "🛏️按时睡觉".to_string(),
            _ => "什么？我又摆了？".to_string(),
        }
    }
    fn what_is_the_proj_condition() -> String {
        "😞当然是还没做完咯，想要成为绝不死线佬".to_string()
    }
    fn what_time_is_now() -> String { "🌃凌晨2点".to_string() }
}
fn loop_life() -> String { "🥳快进到下一天".to_string() }

fn main() {
    Proj::behavir(Proj::Coding(true));
    Proj::what_is_the_proj_condition();
    Proj::what_time_is_now();
    loop_life();
}
```

<!-- # 你好👋

## 谁？

你好，我是 @cold-su，

现在没什么可以说的，往后再讲吧。

🥰喜欢的字体：落霞孤鹜 -->

<!-- ## 活动记录

[![Coldsu's favorite icons](https://skillicons.dev/icons?i=windows,powershell,rust,md,sublime,notion,github,git)](https://skillicons.dev)

![Coldsu's GitHub stats 01](https://github-readme-stats.vercel.app/api?username=cold-su&show_icons=true&hide=stars)
![Coldsu's GitHub stats 02](https://github-readme-stats.vercel.app/api/top-langs?username=cold-su&show_icons=true&layout=compact)

Click->[GitHub Readme Stats](https://github.com/anuraghazra/github-readme-stats) -->
