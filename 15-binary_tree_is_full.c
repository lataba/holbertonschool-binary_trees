#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 0 on fail
 */

size_t binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if ((tree->left != NULL) && (tree->right != NULL))
	{
		left = binary_tree_is_full(tree->left);
		rigth = binary_tree_is full(tree->right);
	}

	if (left == 1 && rigth == 1)
		return (1);

	return (0);
}
