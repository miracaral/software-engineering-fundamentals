#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cumle[100];
    int i=0,sayac=0;

    printf("Lutfen bir cumle giriniz.\n");
    fgets(cumle,100,stdin);

    while(cumle[i] != NULL)       // \0 yerine NULL demekte işe yarar!
    {
        if(cumle[i] == ' ')
        {
            sayac++;
        }
        i++;
    }
        printf("Girilen cumledeki kelime sayisi: %d\n",sayac+1);


    return 0;
}