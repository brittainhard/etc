/**
 * getpid is also in unitsd.h
 *
 * Here we are using a long to promote portability.
 */
#include "../apue.h"


int main(int argc, char *argv[])
{
    printf("Hello world from process ID %ld\n", (long)getpid());
    return 0;
}
