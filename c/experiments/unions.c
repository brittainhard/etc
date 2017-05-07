#include <stdio.h>
#include <stdlib.h>


typedef struct x {
    int first;
    float second;
} x;

typedef union y {
    int first;
    float second;
} y;


void struct_nonsense()
{
    x *one = malloc(sizeof(x));
    one->first = 1;
    one->second = 2.0;
    free(one);
}

/**
 * Unions can only access one value at a time, so when you try to access the
 * value of a union attribute after another attribute has been set, you will get
 * back a garbage value.
 *
 * You need to be thankful for what you have.
 */
void union_nonsense()
{
    y *two = malloc(sizeof(x));
    two->first = 1;
    two->second = 2.0;

    // Prints arbitrary value because two -> second has been set.
    printf("%d\n", two->first);

    // Prints second value correctly, 2.0.
    printf("%f\n", two->second);
    free(two);

    /**
     * The goal is not to get somewhere, and get there fast; not to be something
     * and become it quickly. By doing the thing, you are the thing.
     */
}

int main(int argc, char *argv[])
{
    struct_nonsense();
    union_nonsense();
    return 0;
}
