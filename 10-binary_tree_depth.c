#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of a node
 * in a binary tree
 * @tree: A pointer to the root of the tree
 * Return: the depth of the node or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
