#include "binary_trees.h"

/**
 * bst_search - A function that searches for a value in a Binary Search Tree
 * @tree: A pointer to the root of the Binary Search Tree
 * @value: value to search for in the tree
 * Return: NULL if nothing is found or the search continues
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (value == tree->n)
		return ((bst_t *)tree);
	if (tree->n > value)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
