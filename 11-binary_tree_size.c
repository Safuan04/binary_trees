#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: is a pointer to measure the size
 * Return: (0) if tree is NULL, otherwise size
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (1 + left_size + right_size);
}
