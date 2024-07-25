# mkdocs-material的文档

## 目录

- [开始使用](#开始使用)
  - [下载](#下载)
- [外链](#外链)
  - [在虚拟环境里面用pip](#在虚拟环境里面用pip)

## [开始使用](https://squidfunk.github.io/mkdocs-material/getting-started/)

Material for MkDocs是一个强大的、基于MkDocs的文档框架，也是一个服务于项目文档的静态网站生成器。如果你对Python较为熟悉，可以用pip（Python的包管理器）来下载Material for MkDocs。若否，我们建议你使用docker。

### 下载

#### pip（较为推荐）

Material for MkDocs有Python包，可以用pip来下载，最好是用虚拟环境。打开终端，然后用下列命令来下载Material for MkDocs：

```bash
pip install mkdocs-material
```

## 外链

### [在虚拟环境里面用pip](https://realpython.com/what-is-pip/#using-pip-in-a-python-virtual-environment)

为了避免直接下载Python包到Python主目录下面，则要用到“虚拟环境”。虚拟环境会为项目提供一个独立的Python解释器。在这个环境里面看到的任何包都是与系统下的解释器相独立的。这意味着你可以让你的项目依赖包与整个系统的或其他项目的切割。

用虚拟环境有三个好处:

一则，手头上的项目的Python的版本是正确的。

二则，运行pip或pip3时，指的是正确的实例。

三则，在不影响其他项目的情况下，给项目用一个特定的包。

Python3有用来创建虚拟环境的内建模块。这个模块会以下载一个独立的Python的方式来创建虚拟环境。虚拟环境被激活后，就可以下载Python包到环境里面了。虚拟环境里的Python包跟系统下其他环境的包是互相独立的。

You can follow these steps to create a virtual environment and verify that you’re using the pip module inside the newly created environment:

Windows:

```sh
python -m venv venv

venv\Scripts\activate.bat

pip3 --version
# pip 21.2.3 from ...\lib\site-packages\pip (python 3.10)

pip --version
# pip 21.2.3 from ...\lib\site-packages\pip (python 3.10)
```

最后，可以确认一下虚拟环境里的pip和pip3的版本。二者都指向同一个pip模块，因此虚拟环境被激活后，pip和pip3都是可用的。
