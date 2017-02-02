#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>


typedef struct ValueTree {
    int val;
    struct ValueTree *left;
    struct ValueTree *right;
} ValueTree;


ValueTree *create_node(int val)
{
    ValueTree *new = (ValueTree *)malloc(sizeof(ValueTree));
    new->val = val;
    new->left = NULL;
    new->right = NULL;
    return new;
}

void insert_leaf(ValueTree *head, int val)
{
    ValueTree *current = head;
    while(true){
        if(current->val < val){
            if(current->right == NULL){
                current->right = create_node(val);
                break;
            }
            current = current->right;
        } else if(current->val > val){
            if(current->left == NULL){
                current->left = create_node(val);
                break;
            }
            current = current->left;
        } else if(current->val == val){
            current->val = val;
            break;
        }
    }
}

void free_tree(ValueTree *head)
{
    while(true){
        printf("%d\n", 4);
        break;
    }
}

int main(int argc, char *argv[])
{
    ValueTree *head = create_node(4);
    insert_leaf(head, 6);
    insert_leaf(head, 5);
    insert_leaf(head, 10);
    free_tree(head);
    free(head->right->right);
    free(head->right->left);
    free(head->right);
    free(head);
    return 0;
}
