#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node of the tree
 * Return: the balance number
 */

size_t int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left = left + binary_tree_height(tree->left);
	right = right + binary_tree_height(tree->right);

	return (left - height);
}
