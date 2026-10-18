#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i < 6; i++) {

        printf("a");

        for (j = 6; j >= i; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}