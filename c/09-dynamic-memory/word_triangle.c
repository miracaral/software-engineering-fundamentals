#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0,j=0;
    char *kelime;
    kelime = (char*)malloc(50*sizeof(char));

    printf("Lutfen bir kelime giriniz\n");
    fgets(kelime,50,stdin);

    while(i<strlen(kelime)-1)
    {
        j=0;
        while(j<=i)
        {
            printf("%c ",*(kelime+j));
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
