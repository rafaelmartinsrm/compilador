let SessionLoad = 1
if &cp | set nocp | endif
let s:cpo_save=&cpo
set cpo&vim
imap <S-Tab> <Plug>snipMateBack
inoremap <silent> <Plug>snipMateShow =snipMate#ShowAvailableSnips()
inoremap <silent> <Plug>snipMateBack =snipMate#BackwardsSnippet()
inoremap <silent> <Plug>snipMateTrigger =snipMate#TriggerSnippet(1)
inoremap <silent> <Plug>snipMateNextOrTrigger =snipMate#TriggerSnippet()
inoremap <silent> <SNR>42_AutoPairsReturn =AutoPairsReturn()
inoremap <silent> <Plug>(ale_complete) :ALEComplete
map  <Plug>(ctrlp)
map  h
xmap 	 <Plug>snipMateVisual
smap 	 <Plug>snipMateNextOrTrigger
xmap <NL> j
nmap <NL> j
snoremap <NL> i<Right>=snipMate#TriggerSnippet()
omap <NL> j
map  k
map  l
nmap  <Plug>yankstack_substitute_newer_paste
nmap  <Plug>yankstack_substitute_older_paste
nmap  <Plug>(RepeatRedo)
xnoremap <silent>  :call multiple_cursors#new("v", 0)
nnoremap <silent>  :call multiple_cursors#new("n", 1)
nnoremap  :call GotoFile("new")
nnoremap f :call GotoFile("new")
map   /
vnoremap <silent> # :call VisualSelection('', '')?=@/
vnoremap $e `>a``<i`
vnoremap $q `>a'`<i'
vnoremap $$ `>a"`<i"
vnoremap $3 `>a}`<i{
vnoremap $2 `>a]`<i[
vnoremap $1 `>a)`<i(
vnoremap <silent> * :call VisualSelection('', '')/=@/
vmap + <Plug>(expand_region_expand)
nmap + <Plug>(expand_region_expand)
map ,p :cp
map ,n :cn
map ,co ggVGy:tabnew:set syntax=qfpgg
map ,cc :botright cope
vnoremap <silent> ,r :call VisualSelection('replace', '')
map ,g :Ack 
map ,e :e! ~/.vim_runtime/my_configs.vim
nnoremap <silent> ,d :GitGutterToggle
nmap <silent> ,a <Plug>(ale_next_wrap)
nnoremap <silent> ,z :Goyo
map ,nf :NERDTreeFind
map ,nb :NERDTreeFromBookmark 
map ,nn :NERDTreeToggle
map ,b :CtrlPBuffer
map ,j :CtrlP
map ,f :CtrlPMRU
map ,o :BufExplorer
map ,pp :setlocal paste!
map ,x :e ~/buffer.md
map ,q :e ~/buffer
noremap ,m mmHmt:%s///ge'tzt'm
map ,s? z=
map ,sa zg
map ,sp [s
map ,sn ]s
map ,ss :setlocal spell!
map ,cd :cd %:p:h:pwd
map ,te :tabedit =expand("%:p:h")/
nmap ,tl :exe "tabn ".g:lasttab
map ,t, :tabnext 
map ,tm :tabmove 
map ,tc :tabclose
map ,to :tabonly
map ,tn :tabnew
map ,h :bprevious
map ,l :bnext
map ,ba :bufdo bd
map ,bd :Bclose:tabclosegT
map <silent> , :noh
nmap ,w :w!
nmap . <Plug>(RepeatDot)
xmap 0 ^
nmap 0 ^
omap 0 ^
imap ½ $
cmap ½ $
imap Ð <Plug>yankstack_substitute_newer_paste
imap ð <Plug>yankstack_substitute_older_paste
xmap S <Plug>VSurround
vmap Si S(i_f)
nmap U <Plug>(RepeatUndoLine)
nmap _ <Plug>(expand_region_shrink)
xmap _ <Plug>(expand_region_shrink)
nmap cS <Plug>CSurround
nmap cs <Plug>Csurround
nmap cr <Plug>(abolish-coerce-word)
nmap ds <Plug>Dsurround
vmap gx <Plug>NetrwBrowseXVis
nmap gx <Plug>NetrwBrowseX
xmap gS <Plug>VgSurround
xnoremap <silent> gó :call multiple_cursors#select_all("v", 0)
nnoremap <silent> gó :call multiple_cursors#select_all("n", 0)
xnoremap <silent> g :call multiple_cursors#new("v", 0)
nnoremap <silent> g :call multiple_cursors#new("n", 0)
nmap gcu <Plug>Commentary<Plug>Commentary
nmap gcc <Plug>CommentaryLine
omap gc <Plug>Commentary
nmap gc <Plug>Commentary
xmap gc <Plug>Commentary
nnoremap gf :call GotoFile("")
vnoremap <silent> gv :call VisualSelection('gv', '')
nmap u <Plug>(RepeatUndo)
nmap ySS <Plug>YSsurround
nmap ySs <Plug>YSsurround
nmap yss <Plug>Yssurround
nmap yS <Plug>YSurround
nmap ys <Plug>Ysurround
nnoremap <SNR>131_: :=v:count ? v:count : ''
nnoremap <silent> <Plug>(RepeatDot) :exe repeat#run(v:count)
nnoremap <silent> <Plug>(RepeatUndo) :call repeat#wrap('u',v:count)
nnoremap <silent> <Plug>(RepeatUndoLine) :call repeat#wrap('U',v:count)
nnoremap <silent> <Plug>(RepeatRedo) :call repeat#wrap("\<C-R>",v:count)
smap <S-Tab> <Plug>snipMateBack
vnoremap <silent> <Plug>NetrwBrowseXVis :call netrw#BrowseXVis()
nnoremap <silent> <Plug>NetrwBrowseX :call netrw#BrowseX(expand((exists("g:netrw_gx")? g:netrw_gx : '<cfile>')),netrw#CheckIfRemote())
nnoremap <silent> <Plug>SurroundRepeat .
snoremap <silent> <Plug>snipMateBack a=snipMate#BackwardsSnippet()
snoremap <silent> <Plug>snipMateNextOrTrigger a=snipMate#TriggerSnippet()
nnoremap <silent> <Plug>GitGutterPreviewHunk :call gitgutter#utility#warn('please change your map <Plug>GitGutterPreviewHunk to <Plug>(GitGutterPreviewHunk)')
nnoremap <silent> <Plug>(GitGutterPreviewHunk) :GitGutterPreviewHunk
nnoremap <silent> <Plug>GitGutterUndoHunk :call gitgutter#utility#warn('please change your map <Plug>GitGutterUndoHunk to <Plug>(GitGutterUndoHunk)')
nnoremap <silent> <Plug>(GitGutterUndoHunk) :GitGutterUndoHunk
nnoremap <silent> <Plug>GitGutterStageHunk :call gitgutter#utility#warn('please change your map <Plug>GitGutterStageHunk to <Plug>(GitGutterStageHunk)')
nnoremap <silent> <Plug>(GitGutterStageHunk) :GitGutterStageHunk
xnoremap <silent> <Plug>GitGutterStageHunk :call gitgutter#utility#warn('please change your map <Plug>GitGutterStageHunk to <Plug>(GitGutterStageHunk)')
xnoremap <silent> <Plug>(GitGutterStageHunk) :GitGutterStageHunk
nnoremap <silent> <expr> <Plug>GitGutterPrevHunk &diff ? '[c' : ":\call gitgutter#utility#warn('please change your map \<Plug>GitGutterPrevHunk to \<Plug>(GitGutterPrevHunk)')\"
nnoremap <silent> <expr> <Plug>(GitGutterPrevHunk) &diff ? '[c' : ":\execute v:count1 . 'GitGutterPrevHunk'\"
nnoremap <silent> <expr> <Plug>GitGutterNextHunk &diff ? ']c' : ":\call gitgutter#utility#warn('please change your map \<Plug>GitGutterNextHunk to \<Plug>(GitGutterNextHunk)')\"
nnoremap <silent> <expr> <Plug>(GitGutterNextHunk) &diff ? ']c' : ":\execute v:count1 . 'GitGutterNextHunk'\"
xnoremap <silent> <Plug>(GitGutterTextObjectOuterVisual) :call gitgutter#hunk#text_object(0)
xnoremap <silent> <Plug>(GitGutterTextObjectInnerVisual) :call gitgutter#hunk#text_object(1)
onoremap <silent> <Plug>(GitGutterTextObjectOuterPending) :call gitgutter#hunk#text_object(0)
onoremap <silent> <Plug>(GitGutterTextObjectInnerPending) :call gitgutter#hunk#text_object(1)
xnoremap <silent> <Plug>(expand_region_shrink) :call expand_region#next('v', '-')
xnoremap <silent> <Plug>(expand_region_expand) :call expand_region#next('v', '+')
nnoremap <silent> <Plug>(expand_region_expand) :call expand_region#next('n', '+')
nmap <silent> <Plug>CommentaryUndo :echoerr "Change your <Plug>CommentaryUndo map to <Plug>Commentary<Plug>Commentary"
nnoremap <silent> <Plug>(ctrlp) :CtrlP
nnoremap <silent> <Plug>(ale_repeat_selection) :ALERepeatSelection
nnoremap <silent> <Plug>(ale_code_action) :ALECodeAction
nnoremap <silent> <Plug>(ale_rename) :ALERename
nnoremap <silent> <Plug>(ale_import) :ALEImport
nnoremap <silent> <Plug>(ale_documentation) :ALEDocumentation
nnoremap <silent> <Plug>(ale_hover) :ALEHover
nnoremap <silent> <Plug>(ale_find_references) :ALEFindReferences
nnoremap <silent> <Plug>(ale_go_to_type_definition_in_vsplit) :ALEGoToTypeDefinitionIn -vsplit
nnoremap <silent> <Plug>(ale_go_to_type_definition_in_split) :ALEGoToTypeDefinition -split
nnoremap <silent> <Plug>(ale_go_to_type_definition_in_tab) :ALEGoToTypeDefinition -tab
nnoremap <silent> <Plug>(ale_go_to_type_definition) :ALEGoToTypeDefinition
nnoremap <silent> <Plug>(ale_go_to_definition_in_vsplit) :ALEGoToDefinition -vsplit
nnoremap <silent> <Plug>(ale_go_to_definition_in_split) :ALEGoToDefinition -split
nnoremap <silent> <Plug>(ale_go_to_definition_in_tab) :ALEGoToDefinition -tab
nnoremap <silent> <Plug>(ale_go_to_definition) :ALEGoToDefinition
nnoremap <silent> <Plug>(ale_fix) :ALEFix
nnoremap <silent> <Plug>(ale_detail) :ALEDetail
nnoremap <silent> <Plug>(ale_lint) :ALELint
nnoremap <silent> <Plug>(ale_reset_buffer) :ALEResetBuffer
nnoremap <silent> <Plug>(ale_disable_buffer) :ALEDisableBuffer
nnoremap <silent> <Plug>(ale_enable_buffer) :ALEEnableBuffer
nnoremap <silent> <Plug>(ale_toggle_buffer) :ALEToggleBuffer
nnoremap <silent> <Plug>(ale_reset) :ALEReset
nnoremap <silent> <Plug>(ale_disable) :ALEDisable
nnoremap <silent> <Plug>(ale_enable) :ALEEnable
nnoremap <silent> <Plug>(ale_toggle) :ALEToggle
nnoremap <silent> <Plug>(ale_last) :ALELast
nnoremap <silent> <Plug>(ale_first) :ALEFirst
nnoremap <silent> <Plug>(ale_next_wrap_warning) :ALENext -wrap -warning
nnoremap <silent> <Plug>(ale_next_warning) :ALENext -warning
nnoremap <silent> <Plug>(ale_next_wrap_error) :ALENext -wrap -error
nnoremap <silent> <Plug>(ale_next_error) :ALENext -error
nnoremap <silent> <Plug>(ale_next_wrap) :ALENextWrap
nnoremap <silent> <Plug>(ale_next) :ALENext
nnoremap <silent> <Plug>(ale_previous_wrap_warning) :ALEPrevious -wrap -warning
nnoremap <silent> <Plug>(ale_previous_warning) :ALEPrevious -warning
nnoremap <silent> <Plug>(ale_previous_wrap_error) :ALEPrevious -wrap -error
nnoremap <silent> <Plug>(ale_previous_error) :ALEPrevious -error
nnoremap <silent> <Plug>(ale_previous_wrap) :ALEPreviousWrap
nnoremap <silent> <Plug>(ale_previous) :ALEPrevious
map <C-Space> ?
cnoremap  <Home>
cnoremap  <End>
imap S <Plug>ISurround
imap s <Plug>Isurround
imap 	 <Plug>snipMateNextOrTrigger
inoremap <NL> =snipMate#TriggerSnippet()
cnoremap  
cnoremap  <Down>
cnoremap  <Up>
imap 	 <Plug>snipMateShow
imap  <Plug>Isurround
inoremap $e ""i
inoremap $q ''i
inoremap $4 {o}O
inoremap $3 {}i
inoremap $2 []i
inoremap $1 ()i
cnoremap $q eDeleteTillSlash()
cnoremap $c e eCurrentFileDir("e")
cnoremap $j e ./
cnoremap $d e ~/Desktop/
cnoremap $h e ~/
map! <silent> ,p <Plug>PeepOpen
map ½ $
xmap Ð <Plug>yankstack_substitute_newer_paste
nmap Ð <Plug>yankstack_substitute_newer_paste
xmap ð <Plug>yankstack_substitute_older_paste
nmap ð <Plug>yankstack_substitute_older_paste
xnoremap <silent> ó :call multiple_cursors#select_all("v", 0)
nnoremap <silent> ó :call multiple_cursors#select_all("n", 1)
vmap ë :m'<-2`>my`<mzgv`yo`z
vmap ê :m'>+`<my`>mzgv`yo`z
nmap ë mz:m-2`z
nmap ê mz:m+`z
iabbr xdate =strftime("%d/%m/%y %H:%M:%S")
let &cpo=s:cpo_save
unlet s:cpo_save
set autoindent
set autoread
set background=dark
set backspace=eol,start,indent
set expandtab
set fileencodings=ucs-bom,utf-8,default,latin1
set fileformats=unix,dos,mac
set grepprg=/bin/grep\ -nH
set helplang=en
set hidden
set history=500
set hlsearch
set ignorecase
set incsearch
set isfname=@,48-57,/,.,-,_,+,,,#,$,%,~,=,:
set langmenu=en
set laststatus=2
set lazyredraw
set matchtime=2
set nomodeline
set ruler
set runtimepath=~/.vim_runtime/my_plugins/vim-hardtime,~/.vim_runtime/sources_non_forked/ack.vim,~/.vim_runtime/sources_non_forked/ale,~/.vim_runtime/sources_non_forked/auto-pairs,~/.vim_runtime/sources_non_forked/bufexplorer,~/.vim_runtime/sources_non_forked/ctrlp.vim,~/.vim_runtime/sources_non_forked/gist-vim,~/.vim_runtime/sources_non_forked/goyo.vim,~/.vim_runtime/sources_non_forked/gruvbox,~/.vim_runtime/sources_non_forked/lightline-ale,~/.vim_runtime/sources_non_forked/lightline.vim,~/.vim_runtime/sources_non_forked/mayansmoke,~/.vim_runtime/sources_non_forked/nerdtree,~/.vim_runtime/sources_non_forked/nginx.vim,~/.vim_runtime/sources_non_forked/open_file_under_cursor.vim,~/.vim_runtime/sources_non_forked/rust.vim,~/.vim_runtime/sources_non_forked/tabular,~/.vim_runtime/sources_non_forked/tlib,~/.vim_runtime/sources_non_forked/typescript-vim,~/.vim_runtime/sources_non_forked/vim-abolish,~/.vim_runtime/sources_non_forked/vim-addon-mw-utils,~/.vim_runtime/sources_non_forked/vim-bundle-mako,~/.vim_runtime/sources_non_forked/vim-coffee-script,~/.vim_runtime/sources_non_forked/vim-colors-solarized,~/.vim_runtime/sources_non_forked/vim-commentary,~/.vim_runtime/sources_non_forked/vim-expand-region,~/.vim_runtime/sources_non_forked/vim-flake8,~/.vim_runtime/sources_non_forked/vim-fugitive,~/.vim_runtime/sources_non_forked/vim-gist,~/.vim_runtime/sources_non_forked/vim-gitgutter,~/.vim_runtime/sources_non_forked/vim-indent-object,~/.vim_runtime/sources_non_forked/vim-javascript,~/.vim_runtime/sources_non_forked/vim-lastplace,~/.vim_runtime/sources_non_forked/vim-less,~/.vim_runtime/sources_non_forked/vim-markdown,~/.vim_runtime/sources_non_forked/vim-multiple-cursors,~/.vim_runtime/sources_non_forked/vim-pug,~/.vim_runtime/sources_non_forked/vim-pyte,~/.vim_runtime/sources_non_forked/vim-python-pep8-indent,~/.vim_runtime/sources_non_forked/vim-repeat,~/.vim_runtime/sources_non_forked/vim-ruby,~/.vim_runtime/sources_non_forked/vim-snipmate,~/.vim_runtime/sources_non_forked/vim-snippets,~/.vim_runtime/sources_non_forked/vim-surround,~/.vim_runtime/sources_non_forked/vim-yankstack,~/.vim_runtime/sources_non_forked/vim-zenroom2,~/.vim_runtime/sources_forked/peaksea,~/.vim_runtime/sources_forked/set_tabline,~/.vim_runtime/sources_forked/vim-irblack-forked,~/.vim_runtime/sources_forked/vim-peepopen,~/.vim,/var/lib/vim/addons,/usr/share/vim/vimfiles,/usr/share/vim/vim81,/usr/share/vim/vimfiles/after,/var/lib/vim/addons/after,~/.vim/after,~/.vim_runtime,~/.vim_runtime/sources_non_forked/vim-snipmate/after,~/.vim_runtime/sources_non_forked/vim-markdown/after,~/.vim_runtime/sources_non_forked/vim-less/after,~/.vim_runtime/sources_non_forked/vim-javascript/after,~/.vim_runtime/sources_non_forked/vim-coffee-script/after,~/.vim_runtime/sources_non_forked/tabular/after,~/.vim_runtime/sources_non_forked/rust.vim/after
set scrolloff=7
set shiftwidth=4
set showmatch
set showtabline=2
set smartcase
set smartindent
set smarttab
set statusline=\ %{HasPaste()}%F%m%r%h\ %w\ \ CWD:\ %r%{getcwd()}%h\ \ \ Line:\ %l\ \ Column:\ %c
set suffixes=.bak,~,.swp,.o,.info,.aux,.log,.dvi,.bbl,.blg,.brf,.cb,.ind,.idx,.ilg,.inx,.out,.toc
set noswapfile
set switchbuf=useopen,usetab,newtab
set tabline=%!lightline#tabline()
set tabstop=4
set textwidth=500
set timeoutlen=500
set undodir=~/.vim_runtime/temp_dirs/undodir
set undofile
set whichwrap=b,s,<,>,h,l
set wildignore=*.o,*~,*.pyc,*/.git/*,*/.hg/*,*/.svn/*,*/.DS_Store
set wildmenu
set nowritebackup
let s:so_save = &so | let s:siso_save = &siso | set so=0 siso=0
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/Tradutores
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
argglobal
%argdel
$argadd util/ash.h
tabnew
tabnew
tabnew
tabnew
tabnew
tabnew
tabrewind
edit util/ast.h
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 118 + 118) / 237)
exe 'vert 2resize ' . ((&columns * 118 + 118) / 237)
argglobal
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'cpp'
setlocal filetype=cpp
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_inactive_0#%(\ %t\ %)%#LightlineLeft_inactive_0_1#\ %#LightlineMiddle_inactive#%=%#LightlineRight_inactive_1_2#\ %#LightlineRight_inactive_1#%(\ %3p%%\ %)%#LightlineRight_inactive_0_1#\ %#LightlineRight_inactive_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'cpp'
setlocal syntax=cpp
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 26 - ((25 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
26
normal! 09|
wincmd w
argglobal
if bufexists("util/ast.c") | buffer util/ast.c | else | edit util/ast.c | endif
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'c'
setlocal filetype=c
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_active_0#%(\ %{lightline#mode()}\ %)%{(&paste)?\"\ \":\"\"}%(\ %{&paste?\"PASTE\":\"\"}\ %)%#LightlineLeft_active_0_1#\ %#LightlineLeft_active_1#%(\ %{exists(\"*FugitiveHead\")?FugitiveHead():\"\"}\ %)%{((exists(\"*FugitiveHead\")\ &&\ \"\"!=FugitiveHead()))&&(((&filetype!=\"help\"&&\ &readonly))||1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&readonly?\"🔒\":\"\"}\ %)%{((&filetype!=\"help\"&&\ &readonly))&&(1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %t\ %)%{((&filetype!=\"help\"&&(&modified||!&modifiable)))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&modified?\"+\":&modifiable?\"\":\"-\"}\ %)%#LightlineLeft_active_1_2#\ %#LightlineMiddle_active#%=%#LightlineRight_active_1_2#\ %#LightlineRight_active_1#%(\ %3p%%\ %)%#LightlineRight_active_0_1#\ %#LightlineRight_active_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'c'
setlocal syntax=c
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 406 - ((26 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
406
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 118 + 118) / 237)
exe 'vert 2resize ' . ((&columns * 118 + 118) / 237)
tabnext
edit configuracoes.h
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
argglobal
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'cpp'
setlocal filetype=cpp
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_active_0#%(\ %{lightline#mode()}\ %)%{(&paste)?\"\ \":\"\"}%(\ %{&paste?\"PASTE\":\"\"}\ %)%#LightlineLeft_active_0_1#\ %#LightlineLeft_active_1#%(\ %{exists(\"*FugitiveHead\")?FugitiveHead():\"\"}\ %)%{((exists(\"*FugitiveHead\")\ &&\ \"\"!=FugitiveHead()))&&(((&filetype!=\"help\"&&\ &readonly))||1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&readonly?\"🔒\":\"\"}\ %)%{((&filetype!=\"help\"&&\ &readonly))&&(1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %t\ %)%{((&filetype!=\"help\"&&(&modified||!&modifiable)))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&modified?\"+\":&modifiable?\"\":\"-\"}\ %)%#LightlineLeft_active_1_2#\ %#LightlineMiddle_active#%=%#LightlineRight_active_1_2#\ %#LightlineRight_active_1#%(\ %3p%%\ %)%#LightlineRight_active_0_1#\ %#LightlineRight_active_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'cpp'
setlocal syntax=cpp
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 14 - ((13 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
14
normal! 020|
tabnext
edit util/ast.h
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 118 + 118) / 237)
exe 'vert 2resize ' . ((&columns * 118 + 118) / 237)
argglobal
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'cpp'
setlocal filetype=cpp
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_inactive_0#%(\ %t\ %)%#LightlineLeft_inactive_0_1#\ %#LightlineMiddle_inactive#%=%#LightlineRight_inactive_1_2#\ %#LightlineRight_inactive_1#%(\ %3p%%\ %)%#LightlineRight_inactive_0_1#\ %#LightlineRight_inactive_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'cpp'
setlocal syntax=cpp
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
argglobal
if bufexists("parser/clang.y") | buffer parser/clang.y | else | edit parser/clang.y | endif
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal nocindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=s1:/*,mb:*,ex:*/,://,b:#,:%,:XCOMM,n:>,fb:-
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'yacc'
setlocal filetype=yacc
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=tcq
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=GetYaccIndent()
setlocal indentkeys=!^F,o,O
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal nosmartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_active_0#%(\ %{lightline#mode()}\ %)%{(&paste)?\"\ \":\"\"}%(\ %{&paste?\"PASTE\":\"\"}\ %)%#LightlineLeft_active_0_1#\ %#LightlineLeft_active_1#%(\ %{exists(\"*FugitiveHead\")?FugitiveHead():\"\"}\ %)%{((exists(\"*FugitiveHead\")\ &&\ \"\"!=FugitiveHead()))&&(((&filetype!=\"help\"&&\ &readonly))||1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&readonly?\"🔒\":\"\"}\ %)%{((&filetype!=\"help\"&&\ &readonly))&&(1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %t\ %)%{((&filetype!=\"help\"&&(&modified||!&modifiable)))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&modified?\"+\":&modifiable?\"\":\"-\"}\ %)%#LightlineLeft_active_1_2#\ %#LightlineMiddle_active#%=%#LightlineRight_active_1_2#\ %#LightlineRight_active_1#%(\ %3p%%\ %)%#LightlineRight_active_0_1#\ %#LightlineRight_active_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'yacc'
setlocal syntax=yacc
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 478 - ((44 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
478
normal! 014|
wincmd w
exe 'vert 1resize ' . ((&columns * 118 + 118) / 237)
exe 'vert 2resize ' . ((&columns * 118 + 118) / 237)
tabnext
edit lexer/lexer.l
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
argglobal
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal nocindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=s1:/*,mb:*,ex:*/,://,b:#,:%,:XCOMM,n:>,fb:-
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'lex'
setlocal filetype=lex
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=tcq
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_active_0#%(\ %{lightline#mode()}\ %)%{(&paste)?\"\ \":\"\"}%(\ %{&paste?\"PASTE\":\"\"}\ %)%#LightlineLeft_active_0_1#\ %#LightlineLeft_active_1#%(\ %{exists(\"*FugitiveHead\")?FugitiveHead():\"\"}\ %)%{((exists(\"*FugitiveHead\")\ &&\ \"\"!=FugitiveHead()))&&(((&filetype!=\"help\"&&\ &readonly))||1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&readonly?\"🔒\":\"\"}\ %)%{((&filetype!=\"help\"&&\ &readonly))&&(1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %t\ %)%{((&filetype!=\"help\"&&(&modified||!&modifiable)))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&modified?\"+\":&modifiable?\"\":\"-\"}\ %)%#LightlineLeft_active_1_2#\ %#LightlineMiddle_active#%=%#LightlineRight_active_1_2#\ %#LightlineRight_active_1#%(\ %3p%%\ %)%#LightlineRight_active_0_1#\ %#LightlineRight_active_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'lex'
setlocal syntax=lex
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 18 - ((17 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
18
normal! 0
tabnext
edit util/tabela_simbolos.h
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 118 + 118) / 237)
exe 'vert 2resize ' . ((&columns * 118 + 118) / 237)
argglobal
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'cpp'
setlocal filetype=cpp
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_active_0#%(\ %{lightline#mode()}\ %)%{(&paste)?\"\ \":\"\"}%(\ %{&paste?\"PASTE\":\"\"}\ %)%#LightlineLeft_active_0_1#\ %#LightlineLeft_active_1#%(\ %{exists(\"*FugitiveHead\")?FugitiveHead():\"\"}\ %)%{((exists(\"*FugitiveHead\")\ &&\ \"\"!=FugitiveHead()))&&(((&filetype!=\"help\"&&\ &readonly))||1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&readonly?\"🔒\":\"\"}\ %)%{((&filetype!=\"help\"&&\ &readonly))&&(1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %t\ %)%{((&filetype!=\"help\"&&(&modified||!&modifiable)))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&modified?\"+\":&modifiable?\"\":\"-\"}\ %)%#LightlineLeft_active_1_2#\ %#LightlineMiddle_active#%=%#LightlineRight_active_1_2#\ %#LightlineRight_active_1#%(\ %3p%%\ %)%#LightlineRight_active_0_1#\ %#LightlineRight_active_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'cpp'
setlocal syntax=cpp
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 81 - ((53 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
81
normal! 05|
wincmd w
argglobal
if bufexists("util/tabela_simbolos.c") | buffer util/tabela_simbolos.c | else | edit util/tabela_simbolos.c | endif
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'c'
setlocal filetype=c
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_inactive_0#%(\ %t\ %)%#LightlineLeft_inactive_0_1#\ %#LightlineMiddle_inactive#%=%#LightlineRight_inactive_1_2#\ %#LightlineRight_inactive_1#%(\ %3p%%\ %)%#LightlineRight_inactive_0_1#\ %#LightlineRight_inactive_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'c'
setlocal syntax=c
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 257 - ((33 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
257
normal! 05|
wincmd w
exe 'vert 1resize ' . ((&columns * 118 + 118) / 237)
exe 'vert 2resize ' . ((&columns * 118 + 118) / 237)
tabnext
edit tac/tac.h
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 118 + 118) / 237)
exe 'vert 2resize ' . ((&columns * 118 + 118) / 237)
argglobal
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'cpp'
setlocal filetype=cpp
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_inactive_0#%(\ %t\ %)%#LightlineLeft_inactive_0_1#\ %#LightlineMiddle_inactive#%=%#LightlineRight_inactive_1_2#\ %#LightlineRight_inactive_1#%(\ %3p%%\ %)%#LightlineRight_inactive_0_1#\ %#LightlineRight_inactive_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'cpp'
setlocal syntax=cpp
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 4 - ((3 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
4
normal! 024|
wincmd w
argglobal
if bufexists("tac/tac.c") | buffer tac/tac.c | else | edit tac/tac.c | endif
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'c'
setlocal filetype=c
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_active_0#%(\ %{lightline#mode()}\ %)%{(&paste)?\"\ \":\"\"}%(\ %{&paste?\"PASTE\":\"\"}\ %)%#LightlineLeft_active_0_1#\ %#LightlineLeft_active_1#%(\ %{exists(\"*FugitiveHead\")?FugitiveHead():\"\"}\ %)%{((exists(\"*FugitiveHead\")\ &&\ \"\"!=FugitiveHead()))&&(((&filetype!=\"help\"&&\ &readonly))||1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&readonly?\"🔒\":\"\"}\ %)%{((&filetype!=\"help\"&&\ &readonly))&&(1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %t\ %)%{((&filetype!=\"help\"&&(&modified||!&modifiable)))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&modified?\"+\":&modifiable?\"\":\"-\"}\ %)%#LightlineLeft_active_1_2#\ %#LightlineMiddle_active#%=%#LightlineRight_active_1_2#\ %#LightlineRight_active_1#%(\ %3p%%\ %)%#LightlineRight_active_0_1#\ %#LightlineRight_active_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'c'
setlocal syntax=c
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 2 - ((1 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
2
normal! 013|
wincmd w
2wincmd w
exe 'vert 1resize ' . ((&columns * 118 + 118) / 237)
exe 'vert 2resize ' . ((&columns * 118 + 118) / 237)
tabnext
edit exemplos/teste3.c
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
argglobal
let s:cpo_save=&cpo
set cpo&vim
inoremap <buffer> <silent> <BS> =AutoPairsDelete()
inoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','i')
inoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','i')
inoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','i')
inoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','i')
xnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','x')
nnoremap <buffer> <silent> <expr> + TryKey('+') ? '<Plug>(expand_region_expand)' : TooSoon('+','n')
nmap <buffer> ,hp <Plug>(GitGutterPreviewHunk)
nmap <buffer> ,hu <Plug>(GitGutterUndoHunk)
nmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xmap <buffer> ,hs <Plug>(GitGutterStageHunk)
xnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','x')
nnoremap <buffer> <silent> <expr> - TryKey('-') ? '-' : TooSoon('-','n')
inoremap <buffer> <silent> § =AutoPairsMoveCharacter('''')
inoremap <buffer> <silent> ¢ =AutoPairsMoveCharacter('"')
inoremap <buffer> <silent> © =AutoPairsMoveCharacter(')')
inoremap <buffer> <silent> ¨ =AutoPairsMoveCharacter('(')
inoremap <buffer> <silent> î :call AutoPairsJump()a
inoremap <buffer> <silent> <expr> ð AutoPairsToggle()
inoremap <buffer> <silent> â =AutoPairsBackInsert()
inoremap <buffer> <silent> å =AutoPairsFastWrap()
inoremap <buffer> <silent> ý =AutoPairsMoveCharacter('}')
inoremap <buffer> <silent> û =AutoPairsMoveCharacter('{')
inoremap <buffer> <silent> Ý =AutoPairsMoveCharacter(']')
inoremap <buffer> <silent> Û =AutoPairsMoveCharacter('[')
nmap <buffer> [c <Plug>(GitGutterPrevHunk)
nmap <buffer> ]c <Plug>(GitGutterNextHunk)
xmap <buffer> ac <Plug>(GitGutterTextObjectOuterVisual)
omap <buffer> ac <Plug>(GitGutterTextObjectOuterPending)
xnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','x')
nnoremap <buffer> <silent> <expr> h TryKey('h') ? 'h' : TooSoon('h','n')
xmap <buffer> ic <Plug>(GitGutterTextObjectInnerVisual)
omap <buffer> ic <Plug>(GitGutterTextObjectInnerPending)
xnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','x')
nnoremap <buffer> <silent> <expr> j TryKey('j') ? 'j' : TooSoon('j','n')
xnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','x')
nnoremap <buffer> <silent> <expr> k TryKey('k') ? 'k' : TooSoon('k','n')
xnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','x')
nnoremap <buffer> <silent> <expr> l TryKey('l') ? 'l' : TooSoon('l','n')
xnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','x')
xnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','x')
xnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','x')
xnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','x')
nnoremap <buffer> <silent> <expr> <Right> TryKey('<Right>') ? '<Right>' : TooSoon('<RIGHT>','n')
nnoremap <buffer> <silent> <expr> <Left> TryKey('<Left>') ? '<Left>' : TooSoon('<LEFT>','n')
nnoremap <buffer> <silent> <expr> <Down> TryKey('<Down>') ? '<Down>' : TooSoon('<DOWN>','n')
nnoremap <buffer> <silent> <expr> <Up> TryKey('<Up>') ? '<Up>' : TooSoon('<UP>','n')
inoremap <buffer> <silent>  =AutoPairsDelete()
inoremap <buffer> <silent>   =AutoPairsSpace()
inoremap <buffer> <silent> " =AutoPairsInsert('"')
inoremap <buffer> <silent> ' =AutoPairsInsert('''')
inoremap <buffer> <silent> ( =AutoPairsInsert('(')
inoremap <buffer> <silent> ) =AutoPairsInsert(')')
noremap <buffer> <silent> î :call AutoPairsJump()
noremap <buffer> <silent> ð :call AutoPairsToggle()
inoremap <buffer> <silent> [ =AutoPairsInsert('[')
inoremap <buffer> <silent> ] =AutoPairsInsert(']')
inoremap <buffer> <silent> ` =AutoPairsInsert('`')
inoremap <buffer> <silent> { =AutoPairsInsert('{')
inoremap <buffer> <silent> } =AutoPairsInsert('}')
let &cpo=s:cpo_save
unlet s:cpo_save
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal backupcopy=
setlocal balloonexpr=
setlocal nobinary
setlocal nobreakindent
setlocal breakindentopt=
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'c'
setlocal filetype=c
endif
setlocal fixendofline
set foldcolumn=1
setlocal foldcolumn=1
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal formatprg=
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=-1
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},0),0],:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
setlocal lispwords=
setlocal nolist
setlocal makeencoding=
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal nomodeline
setlocal modifiable
setlocal nrformats=bin,octal,hex
setlocal nonumber
setlocal numberwidth=4
setlocal omnifunc=ccomplete#Complete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
set relativenumber
setlocal relativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal scrolloff=-1
setlocal shiftwidth=4
setlocal noshortname
setlocal sidescrolloff=-1
setlocal signcolumn=auto
setlocal smartindent
setlocal softtabstop=0
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{lightline#link()}%#LightlineLeft_active_0#%(\ %{lightline#mode()}\ %)%{(&paste)?\"\ \":\"\"}%(\ %{&paste?\"PASTE\":\"\"}\ %)%#LightlineLeft_active_0_1#\ %#LightlineLeft_active_1#%(\ %{exists(\"*FugitiveHead\")?FugitiveHead():\"\"}\ %)%{((exists(\"*FugitiveHead\")\ &&\ \"\"!=FugitiveHead()))&&(((&filetype!=\"help\"&&\ &readonly))||1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&readonly?\"🔒\":\"\"}\ %)%{((&filetype!=\"help\"&&\ &readonly))&&(1||((&filetype!=\"help\"&&(&modified||!&modifiable))))?\"\ \":\"\"}%(\ %t\ %)%{((&filetype!=\"help\"&&(&modified||!&modifiable)))?\"\ \":\"\"}%(\ %{&filetype==\"help\"?\"\":&modified?\"+\":&modifiable?\"\":\"-\"}\ %)%#LightlineLeft_active_1_2#\ %#LightlineMiddle_active#%=%#LightlineRight_active_1_2#\ %#LightlineRight_active_1#%(\ %3p%%\ %)%#LightlineRight_active_0_1#\ %#LightlineRight_active_0#%(\ %3l:%-2c\ %)
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'c'
setlocal syntax=c
endif
setlocal tabstop=4
setlocal tagcase=
setlocal tags=
setlocal termmode=
setlocal termwinkey=
setlocal termwinscroll=10000
setlocal termwinsize=
setlocal textwidth=500
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal varsofttabstop=
setlocal vartabstop=
setlocal nowinfixheight
setlocal nowinfixwidth
setlocal wrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
tabnext 6
badd +2 util/ast.h
badd +4 util/ash.h
badd +1 configuracoes.h
badd +0 lexer/lexer.l
badd +7 makefile
badd +15 util/tabela_simbolos.h
badd +5 util/ast.c
badd +1 parser/clang.y
badd +1 tac/tac.c
badd +1 tac/tac.h
badd +1 util/tabela_simbolos.c
badd +0 exemplos/teste3.c
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20 shortmess=filnxtToO
set winminheight=1 winminwidth=1
let s:sx = expand("<sfile>:p:r")."x.vim"
if file_readable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &so = s:so_save | let &siso = s:siso_save
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
