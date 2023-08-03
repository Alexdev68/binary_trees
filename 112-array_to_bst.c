#include "binary_trees.h"

/**
 * array_to_bst - a function that builds a Binary Search Tree from an array
 * @array: A pointer to an integer array
 * @size: Size of the array
 * Return: The entire tree or NULL if failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t x;
	bst_t *tree = NULL;

	if (array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		bst_insert(&tree, array[x]);
	}
	if (x == size)
		return (tree);

	return (NULL);
}
