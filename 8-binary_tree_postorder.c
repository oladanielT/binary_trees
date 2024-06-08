#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - function that goes through a binary tree
 * using a postorder transversal.
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 * Return: Void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->right, func);
	func(tree->n);
	binary_tree_postorder(tree->left, func);
}
