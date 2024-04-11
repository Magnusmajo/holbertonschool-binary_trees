#include "binary_trees.h"

/**
 *binary_tree_leaves - measures the leaf of a binary tree
 *@tree: entry pointer
 *Return: leafs
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (leaf + 1);

	leaf = binary_tree_leaves(tree->left) + leaf;
	leaf = binary_tree_leaves(tree->right) + leaf;

	return (leaf);
}
