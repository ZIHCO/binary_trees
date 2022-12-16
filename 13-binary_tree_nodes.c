#include "binary_trees.h"

/**
 * binary_tree_nodes - count node with at least a leave of a binary tree
 * @tree: a pointer the the root node to be measured
 * Return: a non negative number
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (size + 1);
	return (size);
}
