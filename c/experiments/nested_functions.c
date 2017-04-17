#include <stdio.h>


/**
 * GCC will let you do this, but you really shouldn't.
 */
int potato()
{
    void apple()
    {
        printf("%s\n", "potato");
    }
    apple();
    return 0;
}

int main(int argc, char *argv[])
{
    potato();
    return 0;
}
