#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to check
 * Return: 1 on success, 0 on failure
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->right || node->left)
			return (0);
		return (1);
	}
	return (0);
}
