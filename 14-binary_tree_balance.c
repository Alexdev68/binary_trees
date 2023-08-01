#include "binary_trees.h"

int max(int a, int b);
int height(const binary_tree_t *tree);

/**
 * binary_tree_balance - This function  measures the balance factor of a binary
 * tree
 * @tree: This is a pointer to the root node of the tree to measure the
 * balance factor
 * Return: This returns the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count_right, count_left;

	if (tree == NULL)
	{
		return (0);
	}

	count_right = height(tree->right);
	count_left = height(tree->left);

	return (count_left - count_right);
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
