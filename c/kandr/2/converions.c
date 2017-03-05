#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * Types can be changed easily if you convert a narrow type to a larger one, so
 * an int to a float.
 */


int atoi2(char s[]){
    int i, n;
    n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9'; i++){
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

int lower(int c)
{
    if(c >= 'A' && c <= 'Z'){
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

int main(int argc, char *argv[])
{
    printf("%d\n", atoi2("10"));
    return 0;
}
