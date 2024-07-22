# 在给push时提示Couldn‘t connect to server（无法连接至服务器）怎么办？

```sh
git config --global http.proxy 'http://192.168.0.1:1080' && git config --global --unset http.proxy

git config --global http.proxy 'http://192.168.0.1:1080' ; git config --global --unset http.proxy
```