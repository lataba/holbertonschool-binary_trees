#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 1, right = 1;

	if (!tree)
		return (0);

	left = left + binary_tree_height(tree->left);
	right = right + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	else
		return (right);
}
