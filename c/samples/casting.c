#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Maybe we can try to take an string and print all the values of all the
// strings? Might be fun.
int main(int argc, char *argv[])
{
    if(argv[0]){
        char *potato = "potato";
        switch(potato){
            case "potato":
                puts("Its potato.");
            default:
                puts("Hey!");
        }
    }
    return 0;
}
