#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: a pointer to the node to find the sibling
 * Return: 0 on fail
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *uncle;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	uncle = binary_tree_sibling(parent);

	return (uncle);
}


/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: 0 on fail
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *sibling;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if ((parent->left == NULL) || (parent->right == NULL))
		return (NULL);

	if (node == parent->left)
		sibling = parent->right;
	else
		sibling = parent->left;

	return (sibling);
}
