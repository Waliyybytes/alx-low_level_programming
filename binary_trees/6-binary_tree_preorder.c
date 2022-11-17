#include "binary_trees.h"

/**
 * binary_tree_preorder - function
 * @tree: node to check
 * @func: pointer to function
 * Return: 1 for Success
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
