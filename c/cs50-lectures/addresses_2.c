#include <stdio.h>

int main(void)
{
    int n = 50;
    //You can also shift the star 1 character left cuz star is not for variable "p" but integer.
    int *p = &n;
    printf("%p\n", p);
}