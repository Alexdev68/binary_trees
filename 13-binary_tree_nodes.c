#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the number of leaves in a tree
 * @tree: This is a pointer to the root node of the tree
 * Return: This returns the number of leave in a tree or NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count + ((tree->left != NULL || tree->right != NULL) ? 1 : 0));
}
