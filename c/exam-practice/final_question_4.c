#include <stdio.h>
#include <string.h>

int main()
{

    char kelime[6];

    printf("Bir kelime giriniz: ");
    scanf("%s", kelime);

    for(int i=6; i>0 ;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c ", kelime[j]);
        }
        printf("\n");
    }
}