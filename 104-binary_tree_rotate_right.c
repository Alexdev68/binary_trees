#include "binary_trees.h"

/**
 * *binary_tree_rotate_right - This function performs left-rotation on a binary
 * tree
 * @tree: This is a pointer to the root node of the tree to rotate
 * Return: This returns a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}

	temp = tree->left;
	tree->left = temp->right;

	if (temp->right != NULL)
	{
		temp->right->parent = tree;
	}

	temp->parent = tree->parent;
	temp->right = tree;
	tree->parent = temp;

	return (tree->parent);
}
