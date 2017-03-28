#include <stdio.h>
#include <stdlib.h>


void print_potato(char *potato)
{
    printf("%c\n", *potato);
}

void print_nums(int *nums)
{
    printf("%d\n", *nums);
}

int main(int argc, char *argv[])
{
    int nums[4] = {0, 1, 2, 3};
    char *potato = "Potato";
    print_potato(potato + 2);
    print_nums(nums + 2);
    return 0;
}
