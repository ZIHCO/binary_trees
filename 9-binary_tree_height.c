#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer the the root node to be measured
 * Return: a non negative number
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t j = 0;

	if (tree)
	{
		while (tree)
		{
			if (tree->left)
				tree = tree->left;
			else
				tree = tree->right;
			i++;
		}
		while (tree)
		{
			if (tree->right)
				tree = tree->right;
			else
				tree = tree->left;
			j++;
		}
		if (j >= i)
			return (j - 1);
		return (i - 1);
	}
	return (0);
}
