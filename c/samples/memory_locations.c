#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * This program gives what looks like the entire contents of memory. Probably a
 * bad intuition. If you subract in the opposite direction, it takes you to a
 * very large number, instead of just 1 place. That's because you are going
 * backwards?
 */
int main(int argc, char *argv[])
{
    int a = 5;
    int b = 5;
    int c = 5;
    printf("%lu\n", &a - &b);
    printf("%lu\n", &b - &a);
    printf("%lu\n", &b - &c);
    printf("%lu\n", &c - &a);
    printf("%lu\n", &a - &c);
    return 0;
}
