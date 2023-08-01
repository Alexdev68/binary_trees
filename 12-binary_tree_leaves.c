#include "binary_trees.h"

/**
 * binary_tree_leaves - This function counts the number of leaves in a tree
 * @tree: This is a pointer to the root node of the tree
 * Return: This returns the number of leave in a tree or NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_no = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaf_no += binary_tree_leaves(tree->left);
	leaf_no += binary_tree_leaves(tree->right);

	return (leaf_no);
}
