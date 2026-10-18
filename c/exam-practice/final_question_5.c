#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    for (int i = -2; i <= 2; i++) {

        int yildiz = 3 - abs(i);

        if (yildiz == 3) {
            printf("* * * * *\n");
        } else {

            for (int k = 0; k < yildiz; k++) printf("* ");

            for (int k = 0; k < 4 * (3 - yildiz); k++) printf(" ");

            for (int k = 0; k < yildiz; k++) printf("* ");
            printf("\n");
        }
    }
    return 0;
}