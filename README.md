# tree-sitter-rbs

[rbs](https://github.com/ruby/rbs) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

syntax reference is https://github.com/ruby/rbs/blob/master/docs/syntax.md

## Use this in Neovim

1. add following code to install parser manually.

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.rbs = {
  install_info = {
    url = "https://github.com/joker1007/tree-sitter-rbs",
    files = { "src/parser.c" },
    branch = "main",
  },
  filetype = "rbs",
}
```

2. run `:TSInstall rbs`

3. install this repository as a neovim plugin

```lua
-- lazy.nvim
require("lazy").setup({
  "joker1007/tree-sitter-rbs"
})

-- packer.nvim
use { "joker1007/tree-sitter-rbs" }
```
