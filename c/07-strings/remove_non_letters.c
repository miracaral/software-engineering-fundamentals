#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char yazi[100];
    char yeniyazi[100]="";
    int i,j=0;

    printf("Lutfen bir yazi giriniz.\n");
    fgets(yazi,100,stdin);

    for(i=0;yazi[i] != '\0';i++)
    {
        if((yazi[i]>= 'a' && yazi[i]<= 'z')||(yazi[i]>= 'A' && yazi[i]<= 'Z'))
        {
            yeniyazi[j++]=yazi[i];

            //  i=1
            //  j=i++;
            //  j degerim 1, i = 2
        }
    }

    printf("Harfler disindaki tum karakterler silindikten sonra %s", yeniyazi);
    
    return 0;
}