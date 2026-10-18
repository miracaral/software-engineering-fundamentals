#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tekmiciftmi(int can)

{
if (can % 2 == 0)
    {
        printf("Bu sayi çifttir");
    }
else
    {
        printf("Bu sayi tektir");
    }
}
int main()
{
    int sayi;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d", &sayi);
    tekmiciftmi(sayi);

    return 0;
}