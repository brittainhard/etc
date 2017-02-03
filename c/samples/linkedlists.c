#include <stdio.h>
#include <stdlib.h>


typedef struct LinkedList {
    int val;
    struct LinkedList *next;
} LinkedList;

LinkedList *new_list(int val)
{
    LinkedList *new = malloc(sizeof(LinkedList));
    new->val = val;
    new->next = NULL;
    return new;
}

void add_node(LinkedList *head, int val)
{
    LinkedList *new = malloc(sizeof(LinkedList));
    new->val = val;
    new->next = NULL;
    LinkedList *current = head;
    while(current != NULL){
        if(current->next == NULL){
            current->next = new;
            break;
        }
        current = current->next;
    }
}

void print_list(LinkedList *head)
{
    LinkedList *current = head;
    while(current != NULL){
        printf("%d\n", current->val);
        current = current->next;
    }
}

// Can probably do two things here. Hold onto the head and free the nodes, or
// free one after the other, starting with the head. If we get a segfault we
// know we have done something wrong.
//
// We are freeing head after it has already been freed.
void free_list(LinkedList *head)
{
    LinkedList *current = head;
    while(current != NULL){
        head = current;
        current->next = current;
        free(head);
    }
}

int main(int argc, char *argv[])
{
    LinkedList *potato = new_list(1);
    add_node(potato, 2);
    add_node(potato, 3);
    add_node(potato, 4);
    print_list(potato);
    free_list(potato);
    return 0;
}
