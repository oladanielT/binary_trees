#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <stdio.h>
/**
 * struct binary_tree_s - Binary tree node.
 * @n: interger stored in the node.
 * @parent: pointer to the parent node.
 * @right: pointer to the right child.
 * @left: pointer to the left child node.
 */

struct binary_tree_s{
	int n;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
	struct binary_tree_s *parent;
};

typedef struct binary_tree_s binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *);





#endif
