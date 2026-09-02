const http = require('http');
const fs = require('fs');
const path = require('path');

// ===== 配置 =====
const ROOT_DIR = './volume';
const ROOT_ABS = path.resolve(ROOT_DIR);

// MIME 类型映射（包含 charset=utf-8）
const MIME_TYPES = {
  // 文本类
  '.txt': 'text/plain; charset=utf-8',
  '.md': 'text/markdown; charset=utf-8',
  '.json': 'application/json; charset=utf-8',
  '.js': 'application/javascript; charset=utf-8',
  '.html': 'text/html; charset=utf-8',
  '.css': 'text/css; charset=utf-8',
  '.xml': 'application/xml; charset=utf-8',
  '.yaml': 'text/yaml; charset=utf-8',
  '.yml': 'text/yaml; charset=utf-8',
  '.toml': 'text/toml; charset=utf-8',
  '.log': 'text/plain; charset=utf-8',
  '.sh': 'text/x-shellscript; charset=utf-8',
  '.py': 'text/x-python; charset=utf-8',
  '.java': 'text/x-java; charset=utf-8',
  '.c': 'text/x-c; charset=utf-8',
  '.cpp': 'text/x-c++; charset=utf-8',
  '.h': 'text/x-c; charset=utf-8',
  '.go': 'text/x-go; charset=utf-8',
  '.rs': 'text/x-rust; charset=utf-8',
  '.php': 'text/x-php; charset=utf-8',
  '.rb': 'text/x-ruby; charset=utf-8',

  // 图片类
  '.png': 'image/png',
  '.jpg': 'image/jpeg',
  '.jpeg': 'image/jpeg',
  '.gif': 'image/gif',
  '.webp': 'image/webp',
  '.svg': 'image/svg+xml',
  '.bmp': 'image/bmp',
  '.ico': 'image/x-icon',
  '.tiff': 'image/tiff',

  // 视频类
  '.mp4': 'video/mp4',
  '.webm': 'video/webm',
  '.ogg': 'video/ogg',
  '.mov': 'video/quicktime',
  '.avi': 'video/x-msvideo',
  '.mkv': 'video/x-matroska',
  '.flv': 'video/x-flv',

  // 音频类
  '.mp3': 'audio/mpeg',
  '.wav': 'audio/wav',
  '.ogg': 'audio/ogg',
  '.flac': 'audio/flac',
  '.aac': 'audio/aac',
  '.m4a': 'audio/mp4',

  // 其他二进制（默认作为下载）
  '.zip': 'application/zip',
  '.tar': 'application/x-tar',
  '.gz': 'application/gzip',
  '.tgz': 'application/gzip',
  '.rar': 'application/vnd.rar',
  '.7z': 'application/x-7z-compressed',
  '.pdf': 'application/pdf',
  '.exe': 'application/octet-stream',
  '.dll': 'application/octet-stream',
  '.bin': 'application/octet-stream',
  '.iso': 'application/octet-stream',
  '.jar': 'application/java-archive',
  '.class': 'application/java-vm',
  '.doc': 'application/msword',
  '.docx': 'application/vnd.openxmlformats-officedocument.wordprocessingml.document',
  '.xls': 'application/vnd.ms-excel',
  '.xlsx': 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
  '.ppt': 'application/vnd.ms-powerpoint',
  '.pptx': 'application/vnd.openxmlformats-officedocument.presentationml.presentation',
  '.odt': 'application/vnd.oasis.opendocument.text',
  '.ods': 'application/vnd.oasis.opendocument.spreadsheet',
  '.odp': 'application/vnd.oasis.opendocument.presentation',
  '.epub': 'application/epub+zip',
  '.mobi': 'application/x-mobipocket-ebook',
  '.deb': 'application/vnd.debian.binary-package',
  '.rpm': 'application/x-rpm',
  '.apk': 'application/vnd.android.package-archive',
  '.dmg': 'application/x-apple-diskimage',
  '.pkg': 'application/x-newton-compatible-pkg'
};

// 需要强制下载的扩展名（即使 MIME 存在，也添加 Content-Disposition: attachment）
const DOWNLOAD_EXTENSIONS = new Set([
  '.zip', '.tar', '.gz', '.tgz', '.rar', '.7z',
  '.pdf', '.exe', '.dll', '.bin', '.iso', '.jar', '.class',
  '.doc', '.docx', '.xls', '.xlsx', '.ppt', '.pptx',
  '.odt', '.ods', '.odp', '.epub', '.mobi',
  '.deb', '.rpm', '.apk', '.dmg', '.pkg'
]);

// ===== SVG 图标定义 =====
const fileBase = (content, bgColor = '#ffffff', strokeColor = '#999999') => `
  <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="16" height="16">
    <path d="M6 2h9l5 5v15H6z" fill="${bgColor}" stroke="${strokeColor}" stroke-width="1"/>
    <path d="M15 2v5h5" fill="none" stroke="${strokeColor}" stroke-width="1"/>
    ${content}
  </svg>`;

const text = (str, x, y, fontSize = 6, fill = '#333333', fontWeight = 'normal') =>
  `<text x="${x}" y="${y}" font-family="Arial, sans-serif" font-size="${fontSize}" fill="${fill}" font-weight="${fontWeight}" text-anchor="middle">${str}</text>`;

const folderIcon = `
  <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="16" height="16">
    <path d="M2 5h6l2 2h12v13H2z" fill="#FCD667" stroke="#C9A84C" stroke-width="1"/>
    <path d="M2 7h20v13H2z" fill="#F9D976" stroke="#C9A84C" stroke-width="1"/>
  </svg>`;

const defaultFileIcon = fileBase(text('?', 12, 14, 8, '#666666'));

const fileIcons = {
  // 文本
  txt: fileBase(text('TXT', 12, 13, 5, '#333333')),
  text: fileBase(text('TXT', 12, 13, 5, '#333333')),
  log: fileBase(text('LOG', 12, 13, 5, '#333333')),
  md: fileBase(text('MD', 12, 13, 5, '#519ABA')),
  markdown: fileBase(text('MD', 12, 13, 5, '#519ABA')),
  json: fileBase(text('{}', 12, 13, 6, '#E6A23C')),
  js: fileBase(text('JS', 12, 13, 6, '#F7DF1E', 'bold'), '#F7DF1E'),
  mjs: fileBase(text('JS', 12, 13, 6, '#F7DF1E', 'bold'), '#F7DF1E'),
  cjs: fileBase(text('JS', 12, 13, 6, '#F7DF1E', 'bold'), '#F7DF1E'),
  ts: fileBase(text('TS', 12, 13, 6, '#3178C6', 'bold'), '#3178C6'),
  tsx: fileBase(text('TS', 12, 13, 6, '#3178C6', 'bold'), '#3178C6'),
  html: fileBase(text('</>', 12, 13, 5, '#E44D26')),
  htm: fileBase(text('</>', 12, 13, 5, '#E44D26')),
  css: fileBase(text('#', 12, 13, 7, '#264DE4')),
  scss: fileBase(text('S', 12, 13, 7, '#CC6699')),
  less: fileBase(text('L', 12, 13, 7, '#1D365D')),
  py: fileBase(text('Py', 12, 13, 6, '#3776AB')),
  pyw: fileBase(text('Py', 12, 13, 6, '#3776AB')),
  java: fileBase(text('J', 12, 13, 7, '#007396')),
  jar: fileBase(text('JAR', 12, 13, 5, '#007396')),
  class: fileBase(text('C', 12, 13, 7, '#007396')),
  c: fileBase(text('C', 12, 13, 7, '#A8B9CC')),
  h: fileBase(text('H', 12, 13, 7, '#A8B9CC')),
  cpp: fileBase(text('C++', 12, 13, 5, '#00599C')),
  cc: fileBase(text('C++', 12, 13, 5, '#00599C')),
  cxx: fileBase(text('C++', 12, 13, 5, '#00599C')),
  hpp: fileBase(text('H++', 12, 13, 5, '#00599C')),
  cs: fileBase(text('C#', 12, 13, 6, '#68217A')),
  go: fileBase(text('Go', 12, 13, 6, '#00ADD8', 'bold')),
  rs: fileBase(text('R', 12, 13, 7, '#DEA584')),
  php: fileBase(text('php', 12, 13, 5, '#777BB4')),
  rb: fileBase(text('Rb', 12, 13, 6, '#CC342D')),
  ruby: fileBase(text('Rb', 12, 13, 6, '#CC342D')),
  sh: fileBase(text('$_', 12, 13, 6, '#4EAA25')),
  bash: fileBase(text('$_', 12, 13, 6, '#4EAA25')),
  zsh: fileBase(text('$_', 12, 13, 6, '#4EAA25')),
  bat: fileBase(text('bat', 12, 13, 4, '#333333')),
  cmd: fileBase(text('cmd', 12, 13, 4, '#333333')),
  ps1: fileBase(text('PS', 12, 13, 5, '#012456')),
  yaml: fileBase(text('Y', 12, 13, 7, '#CB171E')),
  yml: fileBase(text('Y', 12, 13, 7, '#CB171E')),
  toml: fileBase(text('T', 12, 13, 7, '#9C4221')),
  xml: fileBase(text('XML', 12, 13, 4, '#E34C26')),
  svg: fileBase(text('SVG', 12, 13, 4, '#FFB13B')),
  sql: fileBase(text('SQL', 12, 13, 4, '#E38C00')),

  // 图片
  png: fileBase(`
    <path d="M4 16l4-4 4 4 2-2 6 6v-4H4z" fill="#4CAF50"/>
    <circle cx="8" cy="8" r="2" fill="#FFC107"/>
  `),
  jpg: fileBase(`
    <path d="M4 16l4-4 4 4 2-2 6 6v-4H4z" fill="#FF9800"/>
    <circle cx="8" cy="8" r="2" fill="#FFC107"/>
  `),
  jpeg: fileBase(`
    <path d="M4 16l4-4 4 4 2-2 6 6v-4H4z" fill="#FF9800"/>
    <circle cx="8" cy="8" r="2" fill="#FFC107"/>
  `),
  gif: fileBase(text('GIF', 12, 13, 5, '#4CAF50')),
  webp: fileBase(text('W', 12, 13, 7, '#FF5722')),
  bmp: fileBase(text('BMP', 12, 13, 4, '#607D8B')),
  ico: fileBase(text('ICO', 12, 13, 4, '#607D8B')),

  // 压缩包 / 二进制
  zip: fileBase(`
    <path d="M10 4h4v4h4" fill="none" stroke="#FF9800" stroke-width="2"/>
    <path d="M8 10h8v2H8zM8 14h8v2H8z" fill="#FF9800"/>
  `),
  tar: fileBase(text('TAR', 12, 13, 4, '#795548')),
  gz: fileBase(text('GZ', 12, 13, 5, '#795548')),
  tgz: fileBase(text('TGZ', 12, 13, 4, '#795548')),
  rar: fileBase(text('RAR', 12, 13, 4, '#795548')),
  '7z': fileBase(text('7z', 12, 13, 5, '#795548')),
  pdf: fileBase(text('PDF', 12, 13, 4, '#D32F2F')),
  bin: fileBase(text('BIN', 12, 13, 4, '#607D8B')),
  exe: fileBase(text('EXE', 12, 13, 4, '#607D8B')),
  dll: fileBase(text('DLL', 12, 13, 4, '#607D8B')),
  iso: fileBase(text('ISO', 12, 13, 4, '#607D8B')),
};

function getIconByExt(ext) {
  if (!ext) return defaultFileIcon;
  ext = ext.toLowerCase().replace('.', '');
  return fileIcons[ext] || defaultFileIcon;
}

// ===== HTTP 服务器 =====
const server = http.createServer((req, res) => {
  const parsedUrl = new URL(req.url, `http://${req.headers.host}`);
  let requestPath;
  try {
    requestPath = decodeURIComponent(parsedUrl.pathname);
  } catch (e) {
    res.statusCode = 400;
    res.setHeader('Content-Type', 'text/plain; charset=utf-8');
    res.end('Bad Request');
    return;
  }

  const safePath = path.normalize(requestPath).replace(/^(\.\.[/\\])+/, '');
  const targetPath = path.join(ROOT_ABS, safePath);

  if (!targetPath.startsWith(ROOT_ABS)) {
    res.statusCode = 403;
    res.setHeader('Content-Type', 'text/plain; charset=utf-8');
    res.end('Forbidden');
    return;
  }

  fs.stat(targetPath, (err, stats) => {
    if (err) {
      res.statusCode = 404;
      res.setHeader('Content-Type', 'text/plain; charset=utf-8');
      res.end('Not Found');
      return;
    }

    if (stats.isDirectory()) {
      // 目录列表
      fs.readdir(targetPath, { withFileTypes: true }, (err, items) => {
        if (err) {
          res.statusCode = 500;
          res.setHeader('Content-Type', 'text/plain; charset=utf-8');
          res.end('Internal Server Error');
          return;
        }

        const relPath = path.relative(ROOT_ABS, targetPath) || '';
        const title = `Index of ${relPath ? '/' + relPath.split(path.sep).join('/') : '/'}`;

        let html = `<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8">
  <title>${title}</title>
  <style>
    body { font-family: monospace; }
    table { border-collapse: collapse; }
    th, td { padding: 2px 8px; text-align: left; }
    th.size, td.size { text-align: right; }
    a { text-decoration: none; color: #0000EE; }
    a:hover { text-decoration: underline; }
  </style>
</head>
<body>
  <h1>${title}</h1>
  <table>
    <tr>
      <th></th>
      <th>Name</th>
      <th>Last modified</th>
      <th class="size">Size</th>
    </tr>
    <tr><td colspan="4"><hr></td></tr>`;

        if (relPath !== '') {
          const parentRel = path.dirname(relPath);
          const parentUrl = parentRel === '.' ? '/' : '/' + parentRel.split(path.sep).join('/');
          html += `<tr>
            <td>${folderIcon}</td>
            <td><a href="${parentUrl}">../</a></td>
            <td></td>
            <td class="size">-</td>
          </tr>`;
        }

        const dirs = items.filter(i => i.isDirectory()).sort((a, b) => a.name.localeCompare(b.name));
        const files = items.filter(i => !i.isDirectory()).sort((a, b) => a.name.localeCompare(b.name));
        const sorted = [...dirs, ...files];

        for (const item of sorted) {
          const itemPath = path.join(targetPath, item.name);
          const itemStats = fs.statSync(itemPath);
          const isDir = item.isDirectory();

          const encodedName = encodeURIComponent(item.name);
          const relUrl = relPath ? relPath.split(path.sep).join('/') + '/' : '';
          const link = '/' + relUrl + encodedName + (isDir ? '/' : '');

          const mtime = itemStats.mtime.toISOString().replace('T', ' ').slice(0, 19);
          const size = isDir ? '-' : itemStats.size;
          const sizeStr = size === '-' ? '-' : (size < 1024 ? size + ' B' : (size < 1048576 ? (size / 1024).toFixed(1) + ' KB' : (size / 1048576).toFixed(1) + ' MB'));

          const icon = isDir ? folderIcon : getIconByExt(path.extname(item.name));

          html += `<tr>
            <td>${icon}</td>
            <td><a href="${link}">${item.name}${isDir ? '/' : ''}</a></td>
            <td>${mtime}</td>
            <td class="size">${sizeStr}</td>
          </tr>`;
        }

        html += `</table>
</body>
</html>`;

        res.setHeader('Content-Type', 'text/html; charset=utf-8');
        res.end(html);
      });
    } else {
      // 文件处理：区分内联预览和附件下载
      const ext = path.extname(targetPath).toLowerCase();
      const mimeType = MIME_TYPES[ext] || 'application/octet-stream';

      // 判断是否强制下载
      const forceDownload = DOWNLOAD_EXTENSIONS.has(ext);

      if (forceDownload) {
        res.setHeader('Content-Disposition', `attachment; filename="${path.basename(targetPath)}"`);
      }

      // 支持 Range 请求（用于视频、音频等）
      const range = req.headers.range;
      if (range && !forceDownload) {
        // 解析 Range 头，例如 "bytes=start-end"
        const positions = range.replace(/bytes=/, '').split('-');
        const start = parseInt(positions[0], 10);
        const end = positions[1] ? parseInt(positions[1], 10) : stats.size - 1;
        const chunksize = (end - start) + 1;

        res.statusCode = 206;
        res.setHeader('Content-Range', `bytes ${start}-${end}/${stats.size}`);
        res.setHeader('Accept-Ranges', 'bytes');
        res.setHeader('Content-Length', chunksize);
        res.setHeader('Content-Type', mimeType);

        const stream = fs.createReadStream(targetPath, { start, end });
        stream.on('error', (err) => {
          res.statusCode = 500;
          res.end('Internal Server Error');
        });
        stream.pipe(res);
      } else {
        // 完整文件响应
        res.setHeader('Content-Type', mimeType);
        res.setHeader('Content-Length', stats.size);
        res.setHeader('Accept-Ranges', 'bytes');

        const stream = fs.createReadStream(targetPath);
        stream.on('error', (err) => {
          res.statusCode = 500;
          res.end('Internal Server Error');
        });
        stream.pipe(res);
      }
    }
  });
});

const PORT = 8080;
server.listen(PORT, () => {
  console.log(`Server running at http://localhost:${PORT}`);
  console.log(`Serving directory: ${ROOT_ABS}`);
});