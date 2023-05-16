#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 on fail
 */

size_t binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL)
		return (1);

	left = binary_tree_height(tree->left);
	rigth = binary_tree_height(tree->right);


	if (left == rigth)
	{
		left = binary_tree_is_perfect(tree->left);
		rigth = binary_tree_is_perfect(tree->right);
	}

	if (left = right)
		return (1);

	return (0);
}
