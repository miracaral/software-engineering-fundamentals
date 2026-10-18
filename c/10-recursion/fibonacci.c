#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return(fibonacci(n-2)+fibonacci(n-1));
    }
}

int main()
{
    int sayi,i;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&sayi);
    for(i=0;i<sayi;i++)
    {
        printf("%d\n",fibonacci(i));
    }

    return 0;
}