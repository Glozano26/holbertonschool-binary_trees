#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t cont_L = 0, cont_R = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	cont_L += binary_tree_leaves(tree->left);
	cont_R += binary_tree_leaves(tree->right);

	return (cont_R + cont_L);
}
