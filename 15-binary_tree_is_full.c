#include "binary_trees.h"

/**
 * binary_tree_is_full - This function checks if a binary tree is full
 * @tree: This is a pointer to the root node of the tree to check
 * Return: This returns 1 if the tree an full or 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lf, rf;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		lf = binary_tree_is_full(tree->left);
		rf = binary_tree_is_full(tree->right);
		return (lf && rf);
	}

	return (0);
}
