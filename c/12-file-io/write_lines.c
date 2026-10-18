#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *dosya;
    char cumle[30];
    int N,i;

    dosya=fopen("bilgi.txt","w");
    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi\n");
    }
    else
    {
        printf("Lutfen bir cumle giriniz\n");
        fgets(cumle,30,stdin);
        printf("Kac satir yazilacak\n");
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            fprintf(dosya,"Satir No : %d Cumle : %s\n",i,cumle);
        }

        fclose(dosya);
        printf("Bilgiler dosyaya yazildi\n");
    }

    return 0;
}