#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


/**
 * Can a binary root be used for array lookups? Better yet, can you make arrays
 * of malloced structs?
 *
 * Yes, this can be done, but it is not varible size, right? Say you had a
 * function that was supposed to be adding an item each time another function
 * was made. This wouldnt be possible without dynamic memory allocation.
 *
 * Basically, the goal here is to allow for array indexing. In that way, it's
 * kind of a linked list with array lookup. A binary search assumes that things
 * are sorted.
 *
 * Consider the mixing of values. You could look something up by saying "get me
 * the item whose value is this." or "get me the person whose age is exactly 5."
 *
 * Somehow hashtables fit in here.
 *
 * Think of a binary root as a flattened thing. If you look at it that way, you
 * can basically throw items in and it will be properly balanced. If you
 * flattened the root, every item in the array would be in order. Every item
 * would be sorted.
 *
 * You cannot compare strings, but maybe you can compare some function which
 * converts a string to something that can be compared. How would you do this?
 */

/**
 * This arrray indexing scheme is good, but doesnt work with trees that have
 * random values inside. We shouldnt worry too much about the applications of
 * binary trees. This is simply an example to save and to use later.
 */
typedef struct Node {
    int value;
    struct Node *right;
    struct Node *left;
} Node;


Node *new_node(int value)
{
    Node *new = malloc(sizeof(Node));
    assert(new != NULL);

    new->value = value;
    new->right = NULL;
    new->left = NULL;
    return new;
}

void insert(Node *root, Node *leaf)
{
    if (root->value > leaf->value) {
        insert(root->left, leaf);
    } else if (root->value < leaf->value) {
        insert(root->right, leaf);
    }
}

Node *search(Node *root, int search_value)
{
    // There is probably a flaw in the logic here. What happens if root is null?
    //
    // We had to add this expression because the control logic explodes if we
    // try to access the attributes of a NULL
    //
    // The compiler here isnt really being fair to me here about not using a
    // general return NULL statement at the end of the function. For
    // documentation, every time I try to add something like this I get this error.
    //
    // warning: control reaches end of non-void function [-Wreturn-type]
    if(!root){
        return NULL;
    }

    if (root->value == search_value) {
        return root;
    } else if (root->value < search_value) {
        search(root->left, search_value);
    } else if (root->value > search_value) {
        search(root->right, search_value);
    }
    return NULL;
}

void search_evaluation(Node *root, int value)
{
    Node *leaf = search(root, value);

    if (!leaf) {
        printf("%s\n", "Not found");
        return;
    } else {
        printf("%s\n", "Found");
        return;
    }
}

int main(int argc, char *argv[])
{
    Node *john = new_node(4);
    Node *paul = new_node(3);
    Node *george = new_node(2);
    Node *ringo = new_node(1);
    insert(john, paul);
    insert(john, george);
    insert(john, ringo);

    // This should not break badly if we try to print the value of a node.
    // printf("%d\n", john->right->value);
    // printf("%d\n", john->left->value);

    search_evaluation(john, 3);

    free(john);
    free(paul);
    free(george);
    free(ringo);
    return 0;
}
