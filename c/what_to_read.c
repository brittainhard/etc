#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
    if (argv[1]){
        if (!strcmp("Y", argv[1]) || !strcmp("y", argv[1])){
            printf("%s\n", "One hour of C, one hour of contemporary tech.");
        } else if (!strcmp("N", argv[1]) || !strcmp("n", argv[1])){
            printf("%s\n", "One hour, opposite of the last subject you studied.");
        } else {
            printf("%s\n", "Invalid input -- Is Kelly working? Please specify one of (Y, y, N, n)");
        }
    } else {
        printf("%s\n", "Is Kelly working or not!?");
    }
    return 0;
}
