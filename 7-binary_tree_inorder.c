#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through in-order binary tree
 * @tree: tree to traverse
 * @func: func on tree->n
 * Return: nothing
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
