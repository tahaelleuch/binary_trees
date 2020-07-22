#include "binary_trees.h"
/**
 * binary_tree_delete - function that delete a binary_tree
 * @tree: binary tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		exit(0);
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	tree = NULL;
}
