/**
 * So you can save some memory using bit fields as statuses, right? If you
 * malloc them, it seems like you get the same shit. It expands the size of the
 * object to be something else entirely.
 *
 * The bit fields let you declare some variables while keeping a very small size.
 *
 * This only works with ints apparently. This is only useful.
 */
#include <stdio.h>
#include <stdlib.h>


struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;

struct {
    unsigned int potato;
    unsigned int apple;
} is_apple;

struct {
    unsigned int potato : 1;
    unsigned int apple : 1;
} is_potato;


void printing_nonsense()
{
    struct is_apple *apple = malloc(sizeof(is_apple));
    struct is_potato *potato = malloc(sizeof(is_potato));
    printf("%lu\n", sizeof(apple));
    printf("%lu\n", sizeof(potato));
    printf( "Memory size occupied by status1 : %lu\n", sizeof(status1));
    printf( "Memory size occupied by status2 : %lu\n", sizeof(status2));
    printf("%lu\n", sizeof(is_apple));
    printf("%lu\n", sizeof(is_potato));
    printf("%lu\n", sizeof(is_potato.potato));
    printf("%lu\n", sizeof(is_apple.potato));
    free(apple);
    free(potato);
}

int main(int argc, char *argv[])
{
    printing_nonsense();
    return 0;
}
