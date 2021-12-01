#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right-child of another node.
 * @parent: A pointer to the parent node.
 * @value: Value of the new node
 *
 * Return: A pointer to the new node / Otherwise - Null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->left)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
