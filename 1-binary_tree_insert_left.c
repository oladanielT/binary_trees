#include "main.h"
#include <stdio.h>


/**
 * binary_tree_insert_left - root node for left child.
 * @parent: pointer to the root node.
 * @value: value added to the node.
 * Return: Always 0
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	parent->left = binary_tree_node(value);
