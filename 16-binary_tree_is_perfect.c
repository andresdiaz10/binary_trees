#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  a function that checks if a node is a leaf
 * @node:  pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, if tree is NULL, returns 0.
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

/**
* num_nodes - number of nodes in a binary tree.
* @height: height.
* Return: size of the tree
*/
size_t num_nodes(size_t height)
{
	size_t i, var = 1;

	if (!height)
		return (var);
	for (i = 0; i < height; i++)
		var = var * 2;
	return (var + num_nodes(height - 1));
}

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: size of the tree, if @tree is NULL, returns 0.
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

/**
 * binary_tree_is_perfect -  function that checks
 * if a binary tree is perfect
 * @tree: Is a pointer to the root node of the tree to check.
 *
 * Return:if the tree is null return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (num_nodes(binary_tree_height(tree)) == binary_tree_size(tree));
}
