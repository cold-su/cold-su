# [Rust-for-Linux的成败得失](https://www.usenix.org/system/files/atc24-li-hongyu.pdf)

## 单词笔记

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

## 起读

### Abstract

Developed for over 30 years, Linux has already become thecomputing foundation for today’s digital world;

自被开发之时起，30多年了，Linux 已成为当今数字世界的计算基础；

from gigantic, complex mainframes (e.g., supercomputers) to cheap, wimpy embedded devices (e.g., IoTs), countless applications are builton top of it.

从巨大的、复杂的主机（例如超级计算机）到便宜、微小的嵌入式设备（例如物联网），无数应用程序都基于它构建。

Yet, such an infrastructure has been plagued by numerous memory and concurrency bugs since the day it was born, due to many rogue memory operations are permitted by C language.

由于粗浅的内存操作被C语言所允许，从它诞生之日起，这种基础设施就饱受内存和并发错误的困扰。

A recent project Rust-for-Linux (RFL) has the potential to address Linux’s safety concerns once and for all – by embracing Rust’s static ownership and type checkers into the kernel code, the kernel may finally be free from memory and concurrency bugs without hurting its performance.

最近的项目 Rust-for-Linux（RFL）有可能一次性解决 Linux 的安全问题——通过将 Rust 的静态所有权和类型检查器融入到内核代码中，内核最终可以摆脱内存和并发错误，而不会损害其性能。

While it has been gradually matured and even merged into Linux mainline, however, RFL is rarely studied and still remains unclear whether it has indeed reconciled the safety and performance dilemma for the kernel.

然而，尽管它已经逐渐成熟并甚至被合并到 Linux 主线中，然而，RFL 很少被研究，仍然不清楚它是否确实解决了内核的安全性和性能困境。