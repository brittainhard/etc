#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int summation(int *numbers, int size)
{
    int sum = 0;
    int i;
    for(i = 0; i < size; i++){
        sum += numbers[i];
    }
    return sum;
}

int main(int argc, char *argv[])
{
    int numbers_array[argc - 1];

    // Start at 1 to avoid grabbing the first argument in argv.
    int i;
    for(i = 1; i < argc; i++){
        numbers_array[i - 1] = atoi(argv[i]);
    }
    printf("%d\n", summation(numbers_array, argc));
    return 0;
}
