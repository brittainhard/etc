filetype plugin indent on
set relativenumber
set autoindent
set shiftwidth=4
set tabstop=4
set textwidth=80
set expandtab
set foldmethod=indent
set autochdir
set noswapfile
syntax on
map <Up> <NOP>
map <Down> <NOP>
map <Left> <NOP>
map <Right> <NOP>
imap <Up> <NOP>
imap <Down> <NOP>
imap <Left> <NOP>
imap <Right> <NOP>

"Deal with mac backspace problem.
set backspace=2
set backspace=indent,eol,start

"Cursors
highlight Folded ctermbg=2
highlight TabLine ctermbg=2
"set cursorline
"highlight CursorLine ctermbg=2 cterm=NONE

"Filetypes
autocmd FileType js setlocal shiftwidth=2 tabstop=2
autocmd FileType python setlocal shiftwidth=4 tabstop=4
autocmd FileType go setlocal shiftwidth=8 tabstop=8
"Configs
let GITROOT = system("git rev-parse --show-toplevel")

"Leaders and vimrc commands
let mapleader=","
nnoremap <Leader>ev :tabedit $MYVIMRC<cr>
nnoremap <Leader>sv :source $MYVIMRC<cr>
nnoremap <Leader>rp :!python %<cr>
nnoremap <Leader>gr :cd `=GITROOT`<cr>:e 
