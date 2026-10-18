#include <stdio.h>
#include <string.h>

int main()
{
    char kelime[10];
    int i=0,j=0;

    printf("Lutfen bir kelime giriniz.\n");
    scanf("%s", &kelime); // zaten tek bir kelime fgets'e gerek yok!!!!

    while(i<strlen(kelime))
    {
    j=0;
    
        while(j<=i)
        {
            printf("%c ",kelime[j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}