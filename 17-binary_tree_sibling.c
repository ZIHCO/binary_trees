#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to find the sibling
 * Return: a pointer to a node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;
	int i;

	if (node)
	{
		parent = node->parent;
		if (parent)
		{
			if (parent->right && parent->left)
			{
				i = parent->right->n;
				if (i == node->n)
					return (parent->left);
				return (parent->right);
			}
		}
	}
	return (NULL);
}
