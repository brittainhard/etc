#include <stdio.h>
#include <stdlib.h>


typedef struct Arithmetic {
    int(*add)(int, int);
    int(*subtract)(int, int);
    int(*multiply)(int, int);
    int(*divide)(int, int);
} Arithmetic;

int adding(int a, int b)
{
    return a + b;
}

int subtracting(int a, int b)
{
    return a - b;
}

int multiplying(int a, int b)
{
    return a * b;
}

int dividing(int a, int b)
{
    return a / b;
}

int main(int argc, char *argv[])
{
    Arithmetic *object = malloc(sizeof(Arithmetic));
    object->add = adding;
    printf("%d\n", object->add(2, 3));
    free(object);
    return 0;
}
