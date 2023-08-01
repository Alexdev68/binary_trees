#include "binary_trees.h"

/**
 * *binary_tree_node - This function creates a binary tree node
 * @parent: This  is a pointer to the parent node of the node to create
 * @value: This is the value of the new node
 * Return: This returns a pointer tho the new node created or NULL if it failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
