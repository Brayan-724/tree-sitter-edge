package tree_sitter_edge_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-edge"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_edge.Language())
	if language == nil {
		t.Errorf("Error loading Edge grammar")
	}
}
