#include <stdio.h>
#include <stdlib.h>


typedef struct Person {
    void (*speech)();
} Person;


void speech()
{
    printf("%s\n", "Hello!");
}

int main(int argc, char *argv[])
{
    Person *kelly = malloc(sizeof(Person));
    kelly->speech = speech;
    kelly->speech();
    free(kelly);
    return 0;
}
