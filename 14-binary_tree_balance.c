#include "binary_trees.h"
/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * to measure the balance factor.
 *
 * Return: If tree is null return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height(tree->left) -
			(int)binary_tree_height(tree->right));
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftside = 0, rightside = 0;

		leftside = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rightside = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((leftside > rightside) ? leftside : rightside);
	}
	return (0);
}
