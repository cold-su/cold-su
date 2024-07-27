# 如何使用？

克隆并安装：

```bash
git clone https://github.com/PCG0/dwm

cd dwm

make && make clean install
```

然后在 `~/.xinitrc` 的末尾中添加：

```bash
exec dwm
```

届时可以在终端中使用 `startx` 来启动 dwm。

如果你在 `~/.xinitrc` 的末尾中看到：

```bash
twm &
xclock -geometry 50x50-1+1 &
xterm -geometry 80x50+494+51 &
xterm -geometry 80x20+494-0 &
exec xterm -geometry 80x66+0+0 -name login
```

那么删掉他们。

# 题外话

## Picom

### 什么是 Picom

Picom 可以让 Linux 拥有丝滑的动画体验。

### 如何使用？

**先确保安装有 Picom**

同样在 `~/.xinitrc` 中，在 `exec dwm` 的上方添加 `picom -b`

就像这样：

```bash
picom -b

exec dwm
```

## clash

与上同理，闲话少说：

```bash
clash . &

exec dwm
```
