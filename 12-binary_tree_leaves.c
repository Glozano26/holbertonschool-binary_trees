#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of tree to count
 * Return: pointer is not leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t countleft = 0, countright = 0;

	if (tree == NULL)
		return (0);

	countleft += binary_tree_leaves(tree->left);
	countright += binary_tree_leaves(tree->right);


	if (tree->left == NULL)
		return (1);
	else if (tree->right == NULL)
		return (1);
	else
		return (countright + countright);

}
