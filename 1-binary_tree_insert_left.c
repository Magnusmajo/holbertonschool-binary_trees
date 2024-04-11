#include "binary_trees.h"

/**
 *binary_tree_insert_left - create a new left node of the parent
 *@parent: entry parent node
 *@value: entry int value
 *Return: new node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new, *dir;

	if (!parent)
		return (NULL);

	dir = parent;
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = dir;

	if (!dir->left)
		dir->left = new;

	else if (dir->left)
	{
		new->left = dir->left;
		dir->left->parent = new;
		dir->left = new;
	}
	return (new);

}
