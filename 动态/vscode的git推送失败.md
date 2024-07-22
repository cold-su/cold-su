# 在给push时提示Couldn‘t connect to server（无法连接至服务器）怎么办？

```sh
git config --global http.proxy 'http://192.168.0.1:1080' && git config --global --unset http.proxy

git config --global http.proxy 'http://192.168.0.1:1080' ; git config --global --unset http.proxy
```

我发现就算这样设置了，也还是会遇到不行的情况。

开TUN+系统代理就好了。