 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    int ilk,iki;

    printf("Lutfen iki adet sayi giriniz.\n");
    scanf("%d%d", &ilk,&iki);

    if(ilk == iki)
    {
        printf("Ilk sayi ikinci sayiya esittir.\n");
    }
    
    if(ilk != iki)
    {
        printf("Iki sayi birbirine esit degildir.\n");
    }

    if(ilk > iki)
    {
        printf("Ilk sayi ikinci sayidan daha buyuktur.\n");
    }

    if(ilk < iki)
    {
        printf("Ilk sayi ikinci sayidan daha kucuktur.\n");
    }

    return 0;
 }