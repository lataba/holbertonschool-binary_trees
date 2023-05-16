#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a
 * binary tree using in-order traversal.
 * @tree: tree to go through with an in-order traversal
 * @func: pointer to function to call for the nodes
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
