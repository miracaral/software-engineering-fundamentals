#include <stdio.h>

int main(void)
{
    char *s;
    printf("s: ");
    scanf("%s", s);
    //We did not use ampersand "&" before "s" cuz we already used char* which means string is already showing the address.
    printf("s: %s\n", s);
}