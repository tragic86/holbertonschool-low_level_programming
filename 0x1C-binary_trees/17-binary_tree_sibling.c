#include "binary_trees.h"
/**
 * binary_tree_sibling - find sibling of node
 * @node: node
 * Return: sibling or null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	if (node->parent->left == node)
		return (node->parent->right);
	return (NULL);

}
