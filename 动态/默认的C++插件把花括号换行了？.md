# 如题

我发现默认的c++插件会把左花括号弄到下一行去，有点不符合我的习惯。

往配置文件里面塞一个这个参数就好:

```json
{
    "C_Cpp.clang_format_style": "{BasedOnStyle: Chromium, IndentWidth: 4, ColumnLimit: 0}",
}
```

我记得默认的是这样的：

```json
{
    "C_Cpp.clang_format_style": "file",
}
```
