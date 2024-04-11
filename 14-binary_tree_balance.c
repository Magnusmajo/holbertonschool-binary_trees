#include "binary_trees.h"

/**
 *bt_hi - measures the height of a binary tree
 *@tree: entry pointer
 *Return: height
 */

int bt_hi(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (-1);

	if (tree->left)
		hl = 1 + bt_hi(tree->left);

	if (tree->right)
		hr = 1 + bt_hi(tree->right);
	return (hl > hr ? hl : hr);
}

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: entry pointer
 *Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bt_hi(tree->left) - bt_hi(tree->right));
}
