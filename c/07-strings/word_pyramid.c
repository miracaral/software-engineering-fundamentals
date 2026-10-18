#include <stdio.h>
#include <string.h>

int main()
{
    char kelime[10];
    int i,j;

    printf("Lutfen bir kelime giriniz.\n");
    scanf("%s", &kelime); // zaten tek bir kelime fgets'e gerek yok!!!!

    for(i=0;i < strlen(kelime);i++)
    {
        for(j=0; j <= i;j++)
        {
            printf("%c ", kelime[j]);
        }
        printf("\n");
    }



    return 0;
}