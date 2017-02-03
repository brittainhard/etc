#include <stdio.h>

#define minimum(x, y) ((x) < (y) ? (x) : (y))


int main(int argc, char *argv[])
{
    printf("%d\n", minimum(1, 2));
    return 0;
}
