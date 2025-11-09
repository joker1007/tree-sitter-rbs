package tree_sitter_rbs_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_rbs "github.com/tree-sitter/tree-sitter-rbs/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rbs.Language())
	if language == nil {
		t.Errorf("Error loading Rbs grammar")
	}
}
