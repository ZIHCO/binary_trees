#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to find the uncle
 * Return: a pointer to a node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;
	binary_tree_t *parent;
	int i;

	if (node)
	{
		parent = node->parent;
		if (parent)
		{
			grandparent = parent->parent;
			if (grandparent)
			{
				if (grandparent->right && grandparent->left)
				{
					i = grandparent->right->n;
					if (i == node->parent->n)
						return (grandparent->left);
					return (grandparent->right);
				}
			}
		}
	}
	return (NULL);
}
