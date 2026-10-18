#include <stdio.h>
#include "cs50.h"
int main(void)
{
    //still bad design but true use "Loop" / to do "for" function
    int scores[3];
    scores[0] = get_int("Score0: ");
    scores[1] = get_int("Score1: ");
    scores[2] = get_int("Score2: ");

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2])/ 3.0);
}