#include "binary_trees.h"
/**
 * binary_tree_insert_left - This is a function that inserts left
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to put in the new node
 * Return: the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
