#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * 
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (parent == NULL)
        return (NULL);
    new_node->parent = parent;
    new_node->n = value;
    new_node->right = NULL;
    new_node->left = NULL;

    return (new_node);
}
