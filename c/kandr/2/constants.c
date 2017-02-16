#include <stdio.h>


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
    char_conversion();
    return 0;
}
