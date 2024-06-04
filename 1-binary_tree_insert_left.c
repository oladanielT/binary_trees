#include "binary_trees.h"
#include <stdio.h>


/**
 * binary_tree_insert_left - root node for left child.
 * @parent: pointer to the root node.
 * @value: value added to the node.
 * Return: Always 0
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
