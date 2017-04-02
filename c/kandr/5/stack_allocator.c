/**
 * This might be useful when we dive into making our own storage allocator.
 */
#include <stdio.h>
#include <stdlib.h>

#define ALLOCSIZE 1000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *allloc(int n);
void afree(char *p);


char *alloc(int n)
{
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp - n;
    } else {
        return 0;
    }
}

void afree(char *p)
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
        allocp = p;
    }
}

int main(int argc, char *argv[])
{
    return 0;
}

