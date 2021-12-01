#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rightside = 0;
	size_t leftside = 0;

	if (!tree)
		return (0);
	if (tree->right)
		rightside = 1 + binary_tree_height(tree->right);
	if (tree->left)
		leftside = 1 + binary_tree_height(tree->left);
	if (rightside > leftside)
		return (rightside);
	return (leftside);
}
