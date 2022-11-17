#include "binary_trees.h"

/**
 * binary_tree_postorder - function
 * @tree: node to check
 * @func: pointer to function
 * Return: 1 for Success
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
