#include "binary_trees.h"

/**
 * find_uncle - Binary tree
 * @node: Entry ointer
 * Return: uncle
 */
binary_tree_t *find_uncle(binary_tree_t *node)
{
	binary_tree_t *father = NULL;

	if (!node || !(node->parent))
		return (NULL);

	father = node->parent;

	if (father->left && (father->left != node))
		return (father->left);
	if (father->right && (father->right != node))
		return (father->right);
	return (NULL);
}

/**
 * binary_tree_uncle - Binary uncle tree
 * @node: node
 * Return: uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (find_uncle(node->parent));
}

