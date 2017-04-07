#include <stdio.h>
#include <stdlib.h>


typedef struct Person {
    char *name;
    int age;
} Person;


int main(int argc, char *argv[])
{
    Person *kelly = malloc(sizeof(Person));
    Person **persons = malloc(sizeof(Person) * 10);
    kelly -> name = "Kelly";
    kelly -> age = 27;
    persons[0] = kelly;
    printf("%d\n", persons[0]->age);
    free(kelly);
    free(persons);
    return 0;
    // CFLAGS motherfuckers
}

