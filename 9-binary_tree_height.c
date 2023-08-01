#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A pointer to the root of the tree
 * Return: height of the tree or 0 if not
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);

	left_side = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_side = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_side > right_side ? left_side : right_side);
}
