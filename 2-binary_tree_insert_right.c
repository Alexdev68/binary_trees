#include "binary_trees.h"

/**
 * *binary_tree_insert_right - This function inserts a node as the left-child
 * of another node
 * @parent: This is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: This returns a pointer to the created node, or NULL on failure or if
 * parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
	}
	else if (parent->right != NULL)
	{
		binary_tree_t *new_node = binary_tree_node(parent, value);
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}

	return (parent->right);
}
