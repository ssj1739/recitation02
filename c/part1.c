#include <stdio.h>
#include <stdlib.h>

// Assign the value of 5 to the integer
// variable pointed to by ptr.
void set_to_five(int *ptr)
{
    *ptr = 5;
}

int main(int argc, char **argv)
{
    int i = 3;

    set_to_five(&i);
    if (i == 5)
    {
        printf("part1: OK\n");
    }
    else
    {
        printf("variable should be 5, actually is %d!\n", i);
    }

    return 0;
}
