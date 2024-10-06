# [Rust-for-Linux的成败得失](https://www.usenix.org/system/files/atc24-li-hongyu.pdf)

目录：[单词笔记](#单词笔记) [起读](#起读)

## 起读

### 摘要

自被开发之时起，30多年了，Linux 已成为当今数字世界的计算基础；从巨大的、复杂的主机（例如超级计算机）到便宜、微小的嵌入式设备（例如物联网），无数应用程序都基于它构建。由于粗浅的内存操作被C语言所允许，从它诞生之日起，这种基础设施就饱受内存和并发错误的困扰。最近的项目 Rust-for-Linux（RFL）有可能一次性解决 Linux 的安全问题——通过将 Rust 的静态所有权和类型检查器融入到内核代码中，内核最终可以摆脱内存和并发错误，而不会损害其性能。然而，尽管它已经逐渐成熟并甚至被合并到 Linux 主线中，然而，RFL 很少被研究，仍然不清楚它是否确实解决了内核的安全性和性能困境。

为此，我们开始进行首次经验主义的、立足于 RFL 的研究，以弄明白其现状和好处，特别是 Rust 如何与 Linux 融合以及这种融合是否能在不增加开销的情况下确保驱动程序的安全性。我们收集并分析了 6 个关键的 RFL 驱动程序，这些驱动程序涉及数百个问题、PR、数千个 Github 提交以及 Linux 邮件列表和 Zulip 上的邮件交流。我们发现，尽管 Rust 减少了内核漏洞，但它无法完全消除它们；更重要的是，如果处理不当，其安全性保证甚至会在运行时开销和开发努力方面给开发者带来巨大的损失。

### 引言

作为当今计算机基础设施的基石，Linux 对于内存并发漏洞的消除从未止步。这些漏洞已经困扰系统软件多年了。虽然有着多年从 Linux 社区中积攒下来的安全强化和工程工作，但漏洞仍是层出不穷的。其中一个根本原因是 C 语言允许给内存对象无拘无束的访问，Linux 反而释放野类型转换和取消引用野指针等以构建复杂的抽象层和通用框架（例如设备驱动），其为的是模块化和性能。

如何在极少的，甚至零性能缩水情况下确保内存安全？Rust 便是个解决方案，它最终或许会解决上述问题。作为一个新兴的、静态的、强类型的程序语言，Rust 声称可以在没有运行时开销的情况下提供安全性和性能。支持其主张的是其作用于消除内存和并发错误的所有权机制，它以三条重要规则为基础：

一则，每个内存地址只能同时被一个变量拥有。

二则，变量的所有权可以被永久移除（即转移到其他变量那去），或者分别使用 Send 和 Sync 特征关键字跨线程借用。

三则，一旦所有者超出范围，其所属变量将被删除，其内存将被释放。

依赖于广泛的静态检查以在编译时执行上述规则，Rust告别了重型且费用不菲的内存检查器，GC也一样。如此，Rust避免了中断和运行时不可预测的延迟。

## 单词笔记

- compatible 兼容的
- delay 延迟、（航班）延误
- unpredictable 不可预测的
- interrupted 中断
- above 上述的
- compile 编译
- extensive 广泛的
- computing 计算机科学
- foundation 基础
- kernel 内核
- gigantic 巨大的
- complex 复杂的
- mainframes 主机
- wimpy 微小的、懦弱的
- embedded 嵌入式的
- IoTs 物联网
- infrastructure 基础设施
- plagued by 痛苦于、受困扰于
- numerous 众多的
- concurrency 并发
- permitted 允许
- potential 潜在的
- matured 成熟的
- mainline 主线的
- rarely 很少
- reconciled 调和的
- empirical 经验主义的、实证过后的
- to this end 为此
- conduct 执行、进行
- facto 事实上
- harden 强化
- emerging 新兴的
- security 安全性
- cease 停止
- eliminate 消除、排除
- ownership 所有权
- type checking 类型检查
- performance 性能
- ultimately 最终地
- compromise 妥协
- unfettered 不受限制的、无拘无束的
- exploits 利用
- wild typecasting 任意类型转换
- raw pointer 野指针
- construct 构造
- abstraction 抽象
- generic frameworks  通用框架
- encapsulation 封装
- modularity 模块化
- degradation 退化
- promising 有希望的
- resolve 解决
- aforementioned 上述的
- claim 声称
- deliver 提供
- overhead 开销
- runtime 运行时
- mechanism 机制
- backing its claim is 支持其主张的是
- concurrency bugs 并发错误
- underpinned by 以……为基础
- exclusively by 独家提供
- permanently 永久
- temporarily 暂时
- dereference 解引用
- i.e. 即
