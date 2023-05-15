#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the left-child.
 * @parent: pointer to the node to insert left-child node
 * @value: value of new node
 * Return: pointer to the new right-child node or NULL if it fails.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
