#include "binary_trees.h"

/**
 * bst_ins - a helper function that inserts a value in a Binary Search Tree
 * @tree: A double pointer to the head of the root of the tree
 * @value: The value to be inserted
 * Return: NULL if failure or the tree with the insertion done
 */

bst_t *bst_ins(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node((*tree), value);
			return ((*tree)->left);
		}
		else
		{
			return (bst_ins(&((*tree)->left), value));
		}
	}
	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node((*tree), value);
			return ((*tree)->right);
		}
		else
		{
			return (bst_ins(&((*tree)->right), value));
		}
	}
	return (NULL);
}

/**
 * bst_insert - a function that inserts a value in a Binary Search Tree
 * @tree: A double pointer to the head of the root of the tree
 * @value: The value to be inserted
 * Return: NULL if failure or the tree with the insertion done
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	return (bst_ins(tree, value));
}
