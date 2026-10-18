#include <stdio.h>

int main()
{
    double n,i=0,sayi,k;
    double tmp=0,result=0,max=0,min=0,average=0;
    printf("Please select integer number: \n");
    scanf("%lf",&n);
    printf("Select a k number: /n");
    scanf("%lf",&k);

    double sayilar[n];
    if(n <= 0)
    {
        printf("Not working due to number of integers");
        return 1;
    }
    printf("Please write your integers: \n");
    while(i<n)
    {
        scanf("%lf",&sayilar[i]);
        i++;
    }
        min = sayilar[0];
        max = sayilar[0];
    for(i = 0 ; i<n ; i++)
    {
        tmp = sayilar[i];
        if(tmp > max)
        {
            max = tmp;
        }
        if(tmp < min)
        {
            min = tmp;
        }

        result += sayilar[i];
    }
    
    printf("SUM: %lf\n",result);
    printf("MAX: %lf\n",max);
    printf("MIN: %lf\n",min);
}