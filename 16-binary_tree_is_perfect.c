#include "binary_trees.h"

int max(int a, int b);
int height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect
 * @tree: This is a pointer to the root node of the tree to check
 * Return: This returns 1 if the tree is prefect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	lh = height(tree->left);
	rh = height(tree->right);

	if (lh == rh)
	{
		if (lh == -1)
			return (0);
		return (1);
	}

	return (0);
}

/**
 * max - This finds the greater of two numbers
 * @a: First number
 * @b: Second number
 * Return: This returns the greater number
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * height - This function measures the height of a given node
 * @tree: This is a pointer to the root of a tree
 * Return: This returns the height of the tree
 */
int height(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
	{
		return (0);
	}

	lh = height(tree->left);
	rh = height(tree->right);

	return (1 + max(lh, rh));
}
