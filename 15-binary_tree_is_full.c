#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t leaves = binary_tree_leaves(tree);
	size_t power = 1;
	size_t i = 0;

	if (tree)
	{
		while (i < height)
		{
			power *= 2;
			i++;
		}
		if (power == leaves)
			return (1);
		return (0);
	}
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer the the root node to be measured
 * Return: a non negative number
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree || (!tree->right && !tree->left))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: a pointer the the root node to be measured
 * Return: a non negative number
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
		return (size + 1);
	return (size);
}
