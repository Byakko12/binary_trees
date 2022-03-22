#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to node in binary tree 
 * @return: 1 if node is leaf otherwise 0 
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return 0;
	
	if (node->left == NULL && node->right == NULL)
		return 1;
	
	return 0;
}
