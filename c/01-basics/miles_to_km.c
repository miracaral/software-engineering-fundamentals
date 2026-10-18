#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609

int main()
{
    float mil_yol,km_yol;

    printf("Lutfen mil cinsinden gittiginiz yolu giriniz\n");
    scanf("%f", &mil_yol);
    
    km_yol = MIL* mil_yol;

    printf("Araba %f km yol gitmistir.\n", km_yol);
    return 0;

}