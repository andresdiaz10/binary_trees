#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: A pointer to the parent node.
 * @value: Value of the new node
 *
 * Return: A pointer to the new node / Otherwise - Null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!new_node)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
