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
- to this end 为此
- conduct 执行、进行


## 起读

### Abstract

Developed for over 30 years, Linux has already become the
 computing foundation for today’s digital world; from gigantic,
 complex mainframes (e.g., supercomputers) to cheap, wimpy
 embedded devices (e.g., IoTs), countless applications are built
 on top of it. Yet, such an infrastructure has been plagued by
 numerous memory and concurrency bugs since the day it was
 born, due to many rogue memory operations are permitted
 by C language. A recent project Rust-for-Linux (RFL) has
 the potential to address Linux’s safety concerns once and for
 all– by embracing Rust’s static ownership and type checkers
 into the kernel code, the kernel may finally be free from mem
ory and concurrency bugs without hurting its performance.
 While it has been gradually matured and even merged into
 Linux mainline, however, RFL is rarely studied and still re
mains unclear whether it has indeed reconciled the safety and
 performance dilemma for the kernel.

自被开发之时起，30多年了，Linux 已成为当今数字世界的计算基础；从巨大的、复杂的主机（例如超级计算机）到便宜、微小的嵌入式设备（例如物联网），无数应用程序都基于它构建。由于粗浅的内存操作被C语言所允许，从它诞生之日起，这种基础设施就饱受内存和并发错误的困扰。最近的项目 Rust-for-Linux（RFL）有可能一次性解决 Linux 的安全问题——通过将 Rust 的静态所有权和类型检查器融入到内核代码中，内核最终可以摆脱内存和并发错误，而不会损害其性能。然而，尽管它已经逐渐成熟并甚至被合并到 Linux 主线中，然而，RFL 很少被研究，仍然不清楚它是否确实解决了内核的安全性和性能困境。

To this end, we conduct the first empirical study on RFL
 to understand its status quo and benefits, especially on how
 Rust fuses with Linux and whether the fusion assures driver
 safety without overhead. We collect and analyze 6 key RFL
 drivers, which involve hundreds of issues and PRs, thousands
 of Github commits and mail exchanges of the Linux mailing
 list, as well as over 12K discussions on Zulip. We have found
 while Rust mitigates kernel vulnerabilities, it is beyond Rust’s
 capability to fully eliminate them; what is more, if not handled
 properly, its safety assurance even costs the developers dearly
 in terms of both runtime overhead and development efforts.

为此，我们开始进行首次经验主义的、立足于 RFl 的研究，以弄明白其现状和好处，特别是 Rust 如何与 Linux 融合以及这种融合是否能在不增加开销的情况下确保驱动程序的安全性。我们收集并分析了 6 个关键的 RFL 驱动程序，这些驱动程序涉及数百个问题、PR、数千个 Github 提交以及 Linux 邮件列表和 Zulip 上的邮件交流。我们发现，尽管 Rust 减少了内核漏洞，但它无法完全消除它们；更重要的是，如果处理不当，其安全性保证甚至会在运行时开销和开发努力方面给开发者带来巨大的损失。