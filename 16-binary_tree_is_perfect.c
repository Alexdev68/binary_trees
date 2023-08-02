#include "binary_trees.h"

int height(const binary_tree_t *tree);
int max(int a, int b);
int no_of_nodes(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect
 * @tree: This is a pointer to the root node of the tree to check
 * Return: This returns 1 if the tree is prefect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int th, tot_no;

	if (tree == NULL)
	{
		return (0);
	}

	th = height(tree) - 1;
	tot_no = no_of_nodes(tree);

	return ((1 << (th + 1)) - 1 == tot_no);
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

/**
 * no_of_nodes - This function measures the height of a given node
 * @tree: This is a pointer to the root of a tree
 * Return: This returns the number of nodes of the tree
 */
int no_of_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (1 + no_of_nodes(tree->left) + no_of_nodes(tree->right));
}
