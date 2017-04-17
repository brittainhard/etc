/**
 * Pretty simple. Takes a file and prints it.
 *
 * Only limitation is the char size?
 */
#include <stdio.h>

#define MAXCHAR 10000


int main(int argc, char *argv[])
{
    char file_content[MAXCHAR];
    int c, i;
    i = 0;
    while((c = getchar()) != EOF) {
        file_content[i] = c;
        i++;
    }
    printf("%s\n", file_content);

    return 0;
}
