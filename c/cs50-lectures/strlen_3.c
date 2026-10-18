#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    //if there is already written header file for u to use, u can use "strlen" function means "string length"
    string name = get_string("Name: ");
    int length = strlen(name);
    printf("%i\n", length);
}
