#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Regular recursion.
int factorial(n)
{
    if(n == 1){
        return n;
    } else {
        return n * factorial(n - 1);
    }
}

int main(int argc, char *argv[])
{
    int a;
    a = factorial(4);
    printf("%d\n", a);
    return 0;
}
