#include <stdio.h>

void shellsort(char input[], int length);


void shellsort(char v[], int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }
}


int main(int argc, char *argv[])
{
    int i;
    char potato[] = "Potato";
    printf("%s\n", potato);
    shellsort(potato, 6);
    printf("%s\n", potato);
    // ++i and i++ squash. The number that gets assigned to the variable
    // depending on how it is squashed. i++ returns 2, and ++i returns 2. This
    // does not work in python. Does it work in go? I don't think that it does.
    //
    // Nope, tried it. It doesn't.
    int c = 1;
    int a = c++;
    int d = ++c;
    int b = ++c;
    printf("%d %d %d\n", a, d, b);
    return 0;
}
