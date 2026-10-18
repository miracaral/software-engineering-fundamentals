#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct library
{
    char book_name[20];
    char author[20];
    int pages;
    float price;
};


int main()
{
    char author[20];
    struct library lib[100];
    int i=0,j,input=0;

    while(input != 5)
    {
    printf("\n\n********##### Kutuphane Yonetim Sistemi #####********\n\n\n");
    printf("1) Kitap Bilgisini Ekleyiniz\n");
    printf("2) Kitap Bilgilerini Goster\n");
    printf("3) Yazara Ait Butun Kitaplari Listele\n");
    printf("4) Kutuphanedeki Toplam Kitap Sayisini Goster\n");
    printf("5) Cikis\n");

    printf("\nLutfen Seciminizi Yapiniz. ");
    scanf("%d",&input);

    switch(input)
        {
        case 1:
            printf("Kitabin adini giriniz = ");
            scanf("%s",lib[i].book_name); 
            printf("Kitabin yazarini giriniz = ");
            scanf("%s",lib[i].author);
            printf("Kitabin sayfa sayisini giriniz = ");
            scanf("%d",&lib[i].pages);
            printf("Kitabin fiyatini giriniz = ");
            scanf("%f",&lib[i].price); 
            i++;

            break;

        case 2:
            printf("Kitap Bilgileri\n");
            for(j=0;j<i;j++)
            {
                printf("%d. kitabim: ",j+1);
                printf("Kitap ismi: %s\n",lib[j].book_name);
                printf("Kitap yazari: %s\n",lib[j].author);
                printf("Kitap sayfa sayisi: %d\n",lib[j].pages);
                printf("Kitap fiyati: %f\n",lib[j].price);
                printf("\n");
            }
            break;

        case 3:
            printf("Yazarin ismini giriniz\n");
            scanf("%s",author);
            for(j=0;j<i;j++)
            {
                if(strcmp(author,lib[j].author) == 0)
                {
                printf("%s yazarina ait kitaplar:\n",author);
                printf("Kitap ismi: %s\n",lib[j].book_name);
                printf("Kitap yazari: %s\n",lib[j].author);
                printf("Kitap sayfa sayisi: %d\n",lib[j].pages);
                printf("Kitap fiyati: %f\n",lib[j].price);
                printf("\n");
                }
                else
                {
                    printf("Boyle bir yazar bulunamadi!!!");
                }
            }
            break;

        case 4:
        printf("\nToplam Kitap Sayisi: %d",i);
            break;

        case 5:
            exit(0);
        }
    }

    return 0;
}


