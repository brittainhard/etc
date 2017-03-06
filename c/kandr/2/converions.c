#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>


/**
 * Types can be changed easily if you convert a narrow type to a larger one, so
 * an int to a float.
 */


int atoi2(char s[]){
    int i, n;
    n = 0;
    for(i = 0; isdigit(s[i]); i++){
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

int lower2(int c)
{
    if(c >= 'A' && c <= 'Z'){
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

int main(int argc, char *argv[])
{
    printf("%f\n", 1 + 0.1);
    return 0;
}
