#include "binary_trees.h"
/**
  *binary_tree_sibling - function that finds the sibling of a node
  *@node:  is a pointer to the root node of the tree to find sibling.
  *Return: If tree and parent is NULL, return 0.
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if ((node->parent->left == NULL && node->parent->right != NULL)
			|| (node->parent->left != NULL && node->parent->right == NULL))
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
