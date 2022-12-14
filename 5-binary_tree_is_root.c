#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a given node is root
 * @node: is a pointer to the node to check
 * Return: 1 or 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent)
			return (0);
		return (1);
	}
	return (0);
}
