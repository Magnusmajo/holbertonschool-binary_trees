#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree: entry pointer
 *Return: 1 full 0 not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int hl = 0, hr = 0;

	if (!tree)
		return (0);

	hl = binary_tree_is_full(tree->left) + 1;
	hr = binary_tree_is_full(tree->right) + 1;

	if (hl == hr)
		return (1);

	else
		return (0);

}
