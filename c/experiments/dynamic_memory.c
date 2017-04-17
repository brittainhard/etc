#include <stdio.h>
#include <stdlib.h>


int func()
{
    return 5;
}

int main(int argc, char *argv[])
{
    // I thought for sure this would cause a runtime memory error problem. Wtf?
    // Not an issue on clang?
    int i = 0;
    // int *ints = malloc(sizeof(atoi(argv[1])));
    // int ints[atoi(argv[1])];
    int ints[func()];
    for (i = 0; i < func(); i++){
        ints[i] = i;
    }
    for (i = 0; i < func(); i++){
        printf("%d\n", ints[i]);
    }
    return 0;
}
