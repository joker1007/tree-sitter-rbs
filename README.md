# tree-sitter-rbs

[![Build/test](https://github.com/joker1007/tree-sitter-rbs/actions/workflows/ci.yml/badge.svg)](https://github.com/joker1007/tree-sitter-rbs/actions/workflows/ci.yml)

[rbs](https://github.com/ruby/rbs) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

syntax reference is https://github.com/ruby/rbs/blob/master/docs/syntax.md

## Use this in Neovim

this parser is supported in nvim-treesitter. (https://github.com/nvim-treesitter/nvim-treesitter/pull/5745)

Please run `:TSInstall rbs`

## If you want to use specific version in Neovim

Please write it to neovim config.

```lua
vim.api.nvim_create_autocmd("User", {
  pattern = "TSUpdate",
  callback = function()
    require("nvim-treesitter.parsers").rbs.install_info.revision = "<commit sha1>"
  end,
})
```
