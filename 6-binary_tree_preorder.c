#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traverse an entire binary tree
 * @tree: tree to traverse
 * @func: func on tree->n
 * Return: nothing
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
