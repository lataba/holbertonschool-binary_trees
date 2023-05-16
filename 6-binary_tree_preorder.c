#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through
 * a binary tree using pre-order traversal 
 * @tree: tree to go through with a pre-order traversal.
 * @func: pointer to function to call for the nodes
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
