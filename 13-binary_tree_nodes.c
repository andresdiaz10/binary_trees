#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to count
 *
 * Return: number of nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_node = 0;

	if (!tree)
		return (0);
	if (tree->right || tree->left)
		n_node = 1;
	n_node += binary_tree_nodes(tree->right);
	n_node += binary_tree_nodes(tree->left);
	return (n_node);
}
