#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Bir sayi giriniz.\n");
    scanf("%d", &n);

    if((n % 13 == 0) && (n % 17 == 0))
    {
        printf("%d sayimiz hem 13'e hem de 17'ye tam bolunuyor.\n", n);
    }
    else if(n % 13 == 0)
    {
        printf("%d sayimiz 13'e tam bolunuyor.\n", n);
    }
    else if(n % 17 == 0)
    {
        printf("%d sayimiz 17'ye tam bolunuyor.\n", n);
    }
    else 
    {
        printf("%d sayimiz 13 ve 17'ye tam bolunmuyor.\n", n);
    }
    
    return 0;
}