#include "binary_trees.h"

/**
 * binary_tree_insert_right - This is a function that inserts right
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to put in the new node
 * Return: the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_node;
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		old_node = parent->right;
		new_node->right = old_node;
		old_node->parent = new_node;
	}
	else
		new_node->right = NULL;

	parent->right = new_node;

	return (new_node);
}
