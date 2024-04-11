#include "binary_trees.h"

/**
 *binary_tree_depth - measures the height of a binary tree
 *@tree: entry pointer
 *Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	else if (tree->parent)
	{
		return (binary_tree_depth(tree->parent) + 1);
	}

		return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root of the tree
 * Return: 1 if the tree is perfect, if not 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hl = 0, hr = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	hl =  binary_tree_depth(tree->left);
	hr =  binary_tree_depth(tree->right);

	if ((hl - hr) == 0)
		return (1);

	return (0);
}
