#include <stdio.h>


#define BUFFER 1000


int main(int argc, char *argv[])
{
    char buffer[BUFFER];
    printf("%s\n", "Give me something to print.");
    fgets(buffer, BUFFER, stdin);
    printf("%s\n", buffer);
    return 0;
}
