syntax on

" 自动缩进
set autoindent
set cindent
" Tab键的宽度
set tabstop=4
" 统一缩进为4
set softtabstop=4
set shiftwidth=4
" 不要用空格代替制表符
set noexpandtab
" 在行和段开始处使用制表符
set smarttab

set nocompatible

"共享剪贴板  
set clipboard+=unnamed

" 选中状态下 Ctrl+c 复制
vmap <C-c> "+y