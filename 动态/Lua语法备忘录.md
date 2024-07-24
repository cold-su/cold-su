# Lua语法备忘录
>
> [!WARNING]
> 这是从我的云盘上面拉取下来的，看来很老了。
>
> 我比较喜欢这种翻开老书的感觉，如果是十年以前的，那就更加有感觉了。
>
> 作为我翻开这个旧文档的纪念，就留下日期吧：
>
> 七月十九日（二〇二四年）
>
> 本文档现已被归档。

## 文件的读存（与python原理相近）
>
> 2022-6-11

```lua
--以只读（r）方式打开文件 test.txt
file = io.open("test.txt", 'r')
--设置输入文件为 NewLuaFile.lua
io.input(file)
--输出
print(io.read(-1))
--关闭文件
io.close(file)
```

## 批量赋值
>
> 2022-6-10

想要实现的效果是这样的：

```python
s1 = "setting1"
s2 = "setting2"
s3 = "setting3"
# ……
s100 = "setting100"
```

解决方案：

```lua
for i = 1,100 do--确认范围
 i = tostring(i)--转义为str
 _G["s"..i] = "setting"..i--赋值
 print(_G["s"..i])--检验，可省略
end
```
