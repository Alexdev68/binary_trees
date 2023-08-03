#include "binary_trees.h"
#include <limits.h>

/**
 * binary_search_min_max_value - A helper function that searches for the
 * minimum maximum value through the binary tree
 * @tree: A pointer to the root of the binary tree
 * @min: minimum value on the binary tree
 * @max: maximum value on the binary tree
 * Return: maximum value in the search
 */

int binary_search_min_max_value(const binary_tree_t *tree, int min, int max)
{
	if (tree != NULL)
	{
		if (tree->n < min || tree->n > max)
		{
			return (0);
		}
		return (binary_search_min_max_value(tree->left, min,
			tree->n - 1) && binary_search_min_max_value
			(tree->right, tree->n + 1, max));
	}
	return (1);
}

/**
 * binary_tree_is_bst - A function that checks if a binary tree is a valid
 * binary search tree
 * @tree: A pointer to the root of the binary tree
 * Return: 1 if successful 0 if not
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_search_min_max_value(tree, INT_MIN, INT_MAX));
}
