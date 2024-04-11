#include "binary_trees.h"

/**
 *binary_tree_node - create a new node on a binary tree
 *@parent: entry parent node
 *@value: entry int value
 *Return: new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new, *dir;

	dir = parent;
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = NULL;

	if (!parent)
	{
		parent = new;
		return (new);
	}

	while (dir->left && dir->right)
	{
		if (value % 2 == 0)
			dir = dir->left;
		if (value % 2 != 0)
			dir = dir->right;
	}

	if (!dir->left)
	{
		dir->left = new;
		new->parent = dir;
	}
	else if (!dir->right)
	{
		dir->right = new;
		new->parent = dir;
	}
	return (new);

}
