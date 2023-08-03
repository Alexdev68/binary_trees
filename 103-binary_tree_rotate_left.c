#include "binary_trees.h"

/**
 * *binary_tree_rotate_left - This function performs left-rotation on a binary
 * tree
 * @tree: This is a pointer to the root node of the tree to rotate
 * Return: This returns a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}

	temp = tree->right;
	tree->right = temp->left;

	if (temp->left != NULL)
	{
		temp->left->parent = tree;
	}

	temp->parent = tree->parent;
	temp->left = tree;
	tree->parent = temp;

	return (tree->parent);
}
