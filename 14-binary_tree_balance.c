#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node of the tree
 * Return: the balance number
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left = left + binary_tree_height(tree->left);
	right = right + binary_tree_height(tree->right);

	return (left - right);
}

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
