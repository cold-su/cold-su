# 如何配置SSH密钥

## 1. 生成SSH密钥

在终端输入以下命令：

```bash
ssh-keygen -t rsa -C "your_email@example.com"
```

然后按回车键，会提示你输入文件保存的位置，默认是`~/.ssh/id_rsa`，按回车键即可。

接着会提示你输入密码，这个密码是可选的，如果你不输入密码，那么在每次使用SSH连接时就不需要输入密码了。

## 2. 添加SSH密钥到ssh-agent

首先，确保ssh-agent正在运行：

```bash
eval "$(ssh-agent -s)"
```

然后，将SSH密钥添加到ssh-agent：

```bash
ssh-add ~/.ssh/id_rsa
```

## 3. 将SSH密钥添加到GitHub

打开GitHub，点击右上角的头像，选择Settings。

在左侧菜单中选择SSH and GPG keys，然后点击New SSH key。

在Title中输入一个描述性的标题，在Key中粘贴你的公钥内容。

点击Add SSH key，完成配置。

## 碎语

虽然我差不多已经会配置SSH密钥了（其过程本身也不难懂），但是我没法把SSH密钥配置到ssh-agent上，还是用github-cli吧。

没有Verified标识就没有吧，反正也不是特别重大的问题。

还有一个就是，这个文档里面写的内容是给Linux用的，而我用的是Windows……

Windows配置一些东西确实要比Linux麻烦一点，这点我有所体会。还是留到以后用Linux再配置吧。
