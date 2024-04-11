#include "binary_trees.h"

/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: entry pointer
 *Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = binary_tree_size(tree->left) + size;
	size = binary_tree_size(tree->right) + size;

	return (size + 1);
}
