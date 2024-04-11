#include "binary_trees.h"

/**
 *binary_tree_is_leaf - check if the node is a leaf
 *@node: entry pointer
 *Return: 1 leaf 0 not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);

	return (0);
}
