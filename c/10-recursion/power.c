#include <stdio.h>
#include <stdlib.h>

int usss(int us,int taban)
{
    int sonuc;
    if(us==0)
    {
        sonuc=1;
    }
    else
    {
        sonuc=taban*usss(us-1,taban);
    }
    return sonuc;
}

int main()
{

    int us,taban;
    printf("Lutfen taban degerini giriniz\n");
    scanf("%d",&taban);
    printf("Lutfen us degerini giriniz\n");
    scanf("%d",&us);
    printf("%d ˆ %d = %d\n",taban,us,usss(us,taban));

    return 0;
}