#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    char surname[20];
    int num;
    float mark;
};


int main()
{
    struct student students[20]; 
    int i;
    float total=0,average;

    for(i=0;i<20;i++)
    {
        printf("Lutfen ogrenci adini giriniz: ");
        scanf("%s",students[i].name);
        printf("Lutfen ogrenci soyadini giriniz: ");
        scanf("%s",students[i].surname);
        printf("Lutfen ogrenci numarasini giriniz: ");
        scanf("%d",&students[i].num);
        printf("Lutfen ogrencinin notunu giriniz: ");
        scanf("%f",&students[i].mark);
        printf("\n");

    }
    
    for(i=0;i<20;i++)
    {
        total = total + students[i].mark;
    }

    average = total / 20;
    printf("Sinif Ortalamasi : %.2f\n",average);

    for(i=0;i<20;i++)
    {
        if(students[i].mark<average)
        {
            printf("Sibop Ogrencilerin Numarasi: %d\n",students[i].num);
        }
    }
    return 0;
}