#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return:  the size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if (!tree)
		return (0);
	if (tree->right)
		tree_size = tree_size + binary_tree_size(tree->right);
	if (tree->left)
		tree_size = tree_size + binary_tree_size(tree->left);
	tree_size += 1;
	return (tree_size);
}
