#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure depth
 * Return: measures depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;
	
	if (tree == NULL || tree->parent == NULL)
		return (0);
	

	count += binary_tree_depth(tree->parent);
	 
	if (tree->parent == NULL)
		return (1);
	

	return (count + 1);

}
