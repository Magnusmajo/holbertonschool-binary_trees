#include "binary_trees.h"

/**
 *binary_tree_insert_right - create a new right node of the parent
 *@parent: entry parent node
 *@value: entry int value
 *Return: new node created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (!dir->right)
		dir->right = new;

	else if (dir->right)
	{
		new->right = dir->right;
		dir->right->parent = new;
		dir->right = new;
	}
	return (new);

}
