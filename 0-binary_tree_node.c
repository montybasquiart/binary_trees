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
    binary_tree_t *montys_newnode = malloc(sizeof(binary_tree_t));

    if (montys_newnode == NULL)
            return;
    montys_newnode->parent = parent;
    montys_newnode->n = value;
    montys_newnode->right = NULL;
    montys_newnode->left = NULL;

    return (montys_newnode);
}
