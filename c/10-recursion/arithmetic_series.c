#include <stdio.h>
#include <stdlib.h>

void seriolustur(int bas,int bit,int artis)
{
    if(bas<=bit)
    {
        printf("%d\n",bas);
        seriolustur(bas+artis,bit,artis);
    }

}

int main()
{

    int bas,bit,artis;
    printf("Lutfen bir baslangic degeri girin\n");
    scanf("%d",&bas);
    printf("Lutfen bir bitis degeri girin\n");
    scanf("%d",&bit);
    printf("Lutfen bir artis degeri girin\n");
    scanf("%d",&artis);
    seriolustur(bas,bit,artis);
    return 0;
}