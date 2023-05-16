#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 on fail
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);


	if (left == right)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
	}

	if (left == right)
		return (1);

	return (0);
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
