#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n) // n rastgele bir degisken harf istersen x de istersen sayi de fark etmez!!
{
    int ilk=0,ikinci=1,sonraki;
    int i;
    
    printf("Uretilecek fibonacci sayilari: \n");

    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            sonraki=i;
        }
        else
        {
            sonraki = ilk+ikinci;
            ilk = ikinci;
            ikinci = sonraki;
        }
        printf("%d\n",sonraki);
    }
}

int main()
{
    int sayi;
    printf("Kac adet fibonacci sayisi uretilecek\n");
    scanf("%d", &sayi);
    fibonacci(sayi);


    return 0;
}