#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    short a = 5;
    long b = 6;
    double potato = 6.0;
    int d = 7;
    char e = 'a';
    printf("%d\n", &a);
    printf("%d\n", &d);
    printf("%d\n", &b);
    printf("%d\n", &potato);
    printf("%d\n", *(&a));
    printf("%d\n", *(&a + 1));
    // Fuckin weird... the address is based on the size of the thing. If you are
    // adding 1 to a short, it adds 2 to the address. If you add 1 to an int, it
    // adds 4 to the address.
    printf("%d\n", *(&a + 3));
    printf("%d\n", *(&d + 1));
    // All pointers are 8 bytes large regardless of type.
    printf("%s\n", "Size ofs");
    printf("%d\n", sizeof(&a));
    printf("%d\n", sizeof(&d));
    printf("%d\n", sizeof(&b));
    printf("%d\n", sizeof(&d));
    printf("%d\n", sizeof(&e));
    return 0;
}
