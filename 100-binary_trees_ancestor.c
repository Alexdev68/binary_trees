#include "binary_trees.h"

int depth(const binary_tree_t *tree);

/**
 * *binary_trees_ancestor - This function finds the lowest common ancestor of
 * two nodes
 * @first: This is a pointer to the first node
 * @second: This is a pointer to the second node
 * Return: This returns a pointer to the lowest common ancestor node of the
 * two given nodes other wise NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int dep_first, dep_second;

	if (first == NULL || second == NULL)
		return (NULL);
	dep_first = depth(first);
	dep_second = depth(second);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first->parent == second)
		return ((binary_tree_t *)second);

	if (second->parent == first)
		return ((binary_tree_t *)first);

	while (dep_first > dep_second)
	{
		first = first->parent;
		dep_first--;
	}

	while (dep_second > dep_first)
	{
		second = second->parent;
		dep_second--;
	}

	while (first && second)
	{
		if (first == second)
		{
			return ((binary_tree_t *)first);
		}

		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}

/**
 * depth - This function calculates the depth of the tree
 * @tree: This is a pointer to the root of the tree
 * Return: This returns the depth of the tree
 */
int depth(const binary_tree_t *tree)
{
	return ((!tree) ? 0 : 1 + depth(tree->parent));
}
