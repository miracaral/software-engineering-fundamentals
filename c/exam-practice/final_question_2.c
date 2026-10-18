#include <stdio.h>

int main(void)
{
    int matris[5][6];
    float ort;

    for (int i = 0; i < 5; i++) {

        int top = 0;
        int kare = 0;

        for (int j = 0; j < 6; j++) {
            scanf("%d", &matris[i][j]);
            top = top + matris[i][j];
        }

        if (top > 0) {

            ort = (float)top / 6;

            printf("%d. satirin ortalamasi = %.2f\n", i + 1, ort);
        }
        else {

            for (int j = 0; j < 6; j++) {

                kare += matris[i][j] * matris[i][j];
            }
            printf("%d. satir kareler toplami = %d\n", i + 1, kare);
        }
    }
    return 0;
}