#include "binary_trees.h"

/**
 *binary_tree_nodes - measures the n° o nodes in a binary tree
 *@tree: entry pointer
 *Return: nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes = binary_tree_nodes(tree->left) + nodes;
	nodes = binary_tree_nodes(tree->right) + nodes;

	if (tree->left || tree->right)
		return (nodes + 1);

	return (nodes);
}
