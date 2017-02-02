#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int a = 5;
    int *b = (int *)malloc(sizeof(int));
    int *c;
    // If you set b = &a, it causes an invalid pointer. With malloc'd memory you
    // have to set *b = a, unlike with regular pointers, which you have to set
    // with b = &a. Not sure yet why this happens.
    *b = a;
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%d\n", a);
    printf("%d\n", *b);
    free(b);
    return 0;
}
