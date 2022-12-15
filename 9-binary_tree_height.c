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
		while (tree->left)
		{
			tree = tree->left;
			i++;
			if ((tree->left) == NULL)
			{
				if (tree->right)
				{
					tree = tree->right;
					i++;
				}
			}
		}
		while (tree->right)
		{
			tree = tree->right;
			j++;
			if ((tree->right) == NULL)
			{
				if (tree->left)
				{
					tree = tree->left;
					j++;
				}
			}
		}
		if (j >= i)
			return (j);
		return (i);
	}
	return (0);
}
