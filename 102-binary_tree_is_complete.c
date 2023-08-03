#include "binary_trees.h"

int is_complete(const binary_tree_t *tree, int idx, int size_of_tree);
int size(const binary_tree_t *tree);

/**
 * binary_tree_is_complete - This function checks if a tree is complete
 * @tree: This is a pointer to the root of the tree
 * Return: This returns 1 if the tree is complete otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int check, size_of_tree, idx;

	if (tree == NULL)
	{
		return (0);
	}

	size_of_tree = size(tree);
	idx = 0;
	check = is_complete(tree, idx, size_of_tree);

	return (check);
}

/**
 * is_complete - This function is a helper function
 * @tree: This is a pointer to the root of the tree
 * @idx: This is the index
 * @size_of_tree: This is the number of nodes in the tree
 * Return: This returns 1 if the tree is complete otherwise 0
 */
int is_complete(const binary_tree_t *tree, int idx, int size_of_tree)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (idx >= size_of_tree)
	{
		return (0);
	}

	return (
		is_complete(tree->left, 2 * idx + 1, size_of_tree) &&
		is_complete(tree->right, 2 * idx + 2, size_of_tree)
		);
}

/**
 * size - This is the number of nodes in the tree
 * @tree: This is a pointer to the root of the tree
 * Return: This returns the size of the tree
 */
int size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (1 + size(tree->left) + size(tree->right));
}
