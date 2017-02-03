#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


/**
 * It's probably useful to take some notes here. Remember that Katrina said that
 * she malloced pretty much everything. Keep that in mind.
 *
 * You can use this pattern to store any number of addresses to structs. Can you
 * free something based on the address? That's the important part.
 */
typedef struct MemoryStore {
    void *address;
    struct MemoryStore *next;
} MemoryStore;

void link_address(MemoryStore *store, void *address)
{
    MemoryStore *new = malloc(sizeof(MemoryStore));
    // assert(new != NULL);

    new->next = NULL;
    new->address = address;
    store->next = new;
}

void *gmalloc(void *node, int size)
{
    NULL; 
}

int main(int argc, char *argv[])
{
    int a = 5;
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    *b = a;
    *c = a;

    MemoryStore *store = malloc(sizeof(MemoryStore));
    store->address = b;
    store->next = NULL;
    link_address(store, c);

    free(store->next->address);
    free(store->next);
    free(store->address);
    free(store);
    return 0;
}
