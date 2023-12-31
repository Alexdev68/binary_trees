#include "binary_trees.h"

/**
 * binary_tree_preorder - This function tranverse the binary tree in pre-order
 * transversal
 * @tree: This is the root of the binary tree to be transversed
 * @func: This is a pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
