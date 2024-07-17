使用 [jsdelivr](https://www.jsdelivr.com/) 的 CDN 服务，可以方便地引用一些常用的库和框架，比如 jQuery、Bootstrap 等。

下面是一个简单的例子，演示如何使用 jsdelivr 引用 jQuery：

```html
<!DOCTYPE html>
<html>
<head>
  <title>CDN Example</title>
  <script src="https://cdn.jsdelivr.net/npm/jquery@3.6.0/dist/jquery.min.js"></script>
</head>
<body>
  <h1>Hello, World!</h1>
  <script>
    $(document).ready(function() {
      $("h1").text("Hello, CDN!");
    });
  </script>
</body>
</html>
```

在这个例子中，我们使用 `<script>` 标签引入了 jQuery，并使用 jQuery 改变了 `<h1>` 标签的文本内容。由于我们使用了 jsdelivr 的 CDN 服务，jQuery 文件会从 jsdelivr 的服务器上加载，而不是从我们的服务器上加载，这样可以加快页面的加载速度，并减少服务器的负载。

除了 jQuery，jsdelivr 还提供了很多其他的库和框架，比如 Bootstrap、Vue.js、React 等。我们可以通过在 URL 中指定库和版本的名称来引用这些库和框架，例如：

```html
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
```

这样就可以引用 Bootstrap 5.1.3 版本的 JavaScript 文件。
使用 jsdelivr 的 CDN 服务可以方便地引用常用的库和框架，加快页面的加载速度，并减少服务器的负载。

比如其他的例子：我们可以不再使用繁琐的图床了。

```html
<img src="https://cdn.jsdelivr.net/gh/your-username/your-repo@main/your-image.jpg" alt="Your Image">
```

在这个例子中，我们使用 `https://cdn.jsdelivr.net/gh/your-username/your-repo@main/your-image.jpg` 作为图片的 URL，其中 `your-username` 是你的 GitHub 用户名，`your-repo` 是你的 GitHub 仓库名，`main` 是你的分支名，`your-image.jpg` 是你的图片文件名。这样就可以直接在 HTML 中引用你的图片了。

使用 jsdelivr 的 CDN 服务，我们可以方便地引用 GitHub 上的图片，速度可以加快许多。