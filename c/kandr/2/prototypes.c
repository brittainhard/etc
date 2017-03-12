#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * I think the intersting thing here is that numbers can be converted to others,
 * but this is not the case for other types since they are unique?
 */


double divide_by_three(double num)
{
    return num / 3;
}

int main(int argc, char *argv[])
{
    printf("%f\n", divide_by_three('z'));
    return 0;
}
