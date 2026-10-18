#include <stdio.h>

int main() {
    int yukseklik, i, j;

    printf("Yuksekligi giriniz: ");
    scanf("%d", &yukseklik);

    for (i = 0; i < yukseklik; i++)
    {
        for (j = 0; j < yukseklik - 1 - i; j++) 
        {
            printf(" ");
        }
        printf("a");

        for (j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        printf("a");
        printf("\n");
    }

    return 0;
}