#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node at left
 * @parent: the parent node
 * @value: the data to insert
 * Return: a pointer to the inserted node or NULL
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp_node;

	if (parent)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = value;
		new_node->parent = parent;

		if (parent->right == NULL)
		{
			new_node->right = NULL;
			new_node->left = NULL;
			parent->right = new_node;
			return (new_node);
		}

		tmp_node = parent->right;
		new_node->right = tmp_node;
		new_node->left = NULL;
		parent->right = new_node;
		tmp_node->parent = new_node;
		return (new_node);
	}
	return (NULL);
}
