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

void union_nonsense()
{
    int i = 0;
    y *two = malloc(sizeof(x));
    two->first = 1;
    two->second = 2.0;
    i = i + two->first;
    printf("%d\n", two->first);
    printf("%f\n", two->second);
    printf("%d\n", i);
    free(two);
}

int main(int argc, char *argv[])
{
    struct_nonsense();
    union_nonsense();
    return 0;
}
