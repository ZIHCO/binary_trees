#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t one_leaf_node = binary_tree_node1(tree);

	if (tree)
	{
		if (one_leaf_node)
			return (0);
		return (1);
	}
	return (0);
}

/**
 * binary_tree_node1 - count node with at most a leave of a binary tree
 * @tree: a pointer the the root node to be measured
 * Return: a non negative number
 */

size_t binary_tree_node1(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_node1(tree->left) + binary_tree_node1(tree->right);
	if ((tree->left || tree->right) && !(tree->left && tree->right))
		return (size + 1);
	return (size);
}
