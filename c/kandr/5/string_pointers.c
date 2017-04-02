#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    // This is a pointer than can be changed to point to somewhere else.
    char *apple = "Apple.";
    // This is an array, not a pointer, and it cannot be changed like a pointer
    // can.
    char potato[] = "Potato.";
    // This passes the string as a pointer.
    printf("%s\n", "Hello world!");
    return 0;
}
