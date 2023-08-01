#include "binary_trees.h"

/**
 * binary_tree_postorder - A function that goes through a binary tree using
 * in-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A function pointer to each node of the tree
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
	{
		return;
	}
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
