#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void squeeze(char s[], int c)
{
    int i, j;
    for(i = j = 0; s[i] != '\0'; i++){
        if(s[i] != c){
            // Increment j after we have assigned the new item at that location
            // in the string to that char value. Really confusing and convuluted
            // but whatever.
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

void inc_dec()
{
    int a, b, c;
    a = 5;
    b = 5;
    c = a++;
    printf("c++ becomes %d\n", c);
    c = ++b;
    printf("++c becomes %d\n", c);
    printf("%s\n", "Its like you're smooshing it!");
}


int main(int argc, char *argv[])
{
    char potato[100] = "potato";
    printf("%s\n", potato);
    squeeze(potato, 'o');
    printf("%s\n", potato);
    return 0;
}
