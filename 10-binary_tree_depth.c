#include "binary_trees.h"
/**
 * binary_tree_depth - This a function that measures
 * the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure
 *
 * Return: If tree is null return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_node;

	if (tree == NULL)
		return (0);

	for (depth_node = 0; tree->parent; ++depth_node)
	{
		tree = tree->parent;
	}
	return (depth_node);
}
