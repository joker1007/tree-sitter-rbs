package tree_sitter_rbs_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-rbs"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rbs.Language())
	if language == nil {
		t.Errorf("Error loading Rbs grammar")
	}
}
