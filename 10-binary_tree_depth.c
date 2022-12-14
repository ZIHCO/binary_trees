#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a BT
 * @tree: node of tree to measure
 * Return: depth a non-negative integer
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		while (tree->parent)
		{
			tree = tree->parent;
			n++;
		}
	}
	return (n);
}
