#include "binary_trees.h"

/**
  *binary_tree_node - function that creates a binary tree node
  *@parent: pointer to the parent node of the node to create
  *@value: value in the new node
  *Return: tempNode
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (tempNode == NULL)
	return (NULL);

	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;
	tempNode->parent = parent;

	return (tempNode);
}
