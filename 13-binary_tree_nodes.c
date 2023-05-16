#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 * Return: the number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if ((tree->left != NULL) || (tree->right == NULL))
		leaves++;

	nodes = nodes + binary_tree_leaves(tree->left);
	nodes = nodes + binary_tree_leaves(tree->right);

	return (nodes);
}
