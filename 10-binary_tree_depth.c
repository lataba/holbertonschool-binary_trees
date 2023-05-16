#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a node
 * @tree: A pointer to the node to measure the depth
 * Return: The depth of a node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current;

	if (!tree)
		return (0);

	current = tree;

	while (current->parent)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}
