#include <stdio.h>


#define MAX_LENGTH 100


char *make_array()
{
    char arr[MAX_LENGTH];
    return arr;
}

int potato(char *str)
{
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    printf("%d is the last character\n", i);
    return 0;
}

void char_conversion()
{
    // Converting char to int, and int to char. Interesting.
    int a = 35;
    char b = 'b';
    b = (int)b;
    a = (char)a;
    int c = 1234567;
    printf("%c %d\n", a, a);
    printf("%d %c\n", b, b);
    printf("%d %c\n", c, c);
}

int main(int argc, char *argv[])
{
    char *arr = make_array();
    return 0;
}
