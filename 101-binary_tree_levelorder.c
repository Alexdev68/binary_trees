#include "binary_trees.h"

int max(int a, int b);
int height(const binary_tree_t *tree);
void print_at_level(const binary_tree_t *tree, int lv, void (*func)(int));

/**
 * binary_tree_levelorder - This is the function that implements level order
 * transversal
 * @tree: This is a pointer to the root of a tree
 * @func: This is the function to print out the values
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h, i;

	if (tree == NULL || func == NULL)
	{
		return;
	}

	h = height(tree);

	for (i = 1; i <= h; i++)
	{
		print_at_level(tree, i, func);
	}
}

/**
 * print_at_level - This is a helper function for level order transversal
 * @tree: This is a pointer to the root of a tree
 * @lv: This is the level of the binary tree that we are on
 * @func: This is the function to print out the values
 */
void print_at_level(const binary_tree_t *tree, int lv, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	if (lv == 1)
	{
		func(tree->n);
	}
	else if (lv > 1)
	{
		print_at_level(tree->left, lv - 1, func);
		print_at_level(tree->right, lv - 1, func);
	}
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
