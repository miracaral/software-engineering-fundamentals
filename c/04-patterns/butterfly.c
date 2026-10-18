#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayi,i,j;
printf("Lutfen bir sayi giriniz:");
scanf("%d",&sayi);
for(i=1;i<=2*sayi-1;i++)
{
    for(j=1;j<=2*sayi-1;j++)
    {
        if(i<=sayi && (i+j<=2*i || i+j>=2*sayi))
        {
            printf("* ");
        }
        else if(i>sayi && (i+j>=2*i || i+j<=2*sayi))
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");
}

    return 0;
}