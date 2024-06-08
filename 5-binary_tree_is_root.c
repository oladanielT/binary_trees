#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: node to check.
 * Return: 1 if node is root and 0 if otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
