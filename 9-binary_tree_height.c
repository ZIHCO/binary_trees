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
	const binary_tree_t *tmp_tree;

	if (tree)
	{
		tmp_tree = tree;
		while (tmp_tree)
		{
			if (tmp_tree->left)
			{
				tmp_tree = tmp_tree->left;
				i++;
			}
			else if (tmp_tree->right)
			{
				tmp_tree = tmp_tree->right;
				i++;
			}
			else
				tmp_tree = tmp_tree->right;
		}
		tmp_tree = tree;
		while (tmp_tree)
		{
			if (tmp_tree->right)
			{
				tmp_tree = tmp_tree->right;
				j++;
			}
			else if (tmp_tree->left)
			{
				tmp_tree = tmp_tree->left;
				j++;
			}
			else
				tmp_tree = tmp_tree->right;
		}
		if (j >= i)
			return (j);
		return (i);
	}
	return (0);
}
