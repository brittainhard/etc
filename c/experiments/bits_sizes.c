/**
 * So when youdeclare a bitfield, you are declaring a maximum size of the names
 * in that field. In binary, two bits will only get you to the number 3.
 * 
 * An integer is 4 bytes, which is 32 bits. Very confisong, because sizeof gives
 * you bytes when pointed towards an int, and bits when pointed towards a bit
 * field. Might not be great to print "32" when printing the number of bits.
 *
 * A bit field shows the maximum number of bit positions that are available to
 * that integer. Its a way to specfiy even smaller integers.
 *
 * You can mix and match bit fields with byte sized stuff like ints and arrays.
 */

#include <stdio.h>


struct small_field {
    unsigned int small : 1;
} small_field;

struct large_field {
    unsigned int large : 4;
} large_field;


int main(int argc, char *argv[])
{
    small_field.small = 4;
    large_field.large = 16;
    printf("%d\n", small_field.small);
    printf("%d\n", large_field.large);
    printf("%s\n", "Sizes");
    printf("%lu\n", sizeof(small_field));
    printf("%lu\n", sizeof(large_field));
    return 0;
}
