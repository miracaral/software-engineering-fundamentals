/*
#include <stdio.h>

int absolute(int h,int s)
{
    if(h - s >= 0)
    {
        return (h - s);
    }
    else
        return (s - h);
}

int main()
{
    int n,k,hCount=0,sCount=0;
    scanf("%d %d",&n,&k);
    
    char str[k+1];
    for(int i=0;i<5;i++)
    {
        scanf("%s",str);
        if(str[i] == 'H')
        {
            hCount++;
        }
        else if(str[i] == 'S')
        {
            sCount++;
        }
        else
            continue;
    }
    absolute(hCount,sCount);
    if(hCount > sCount)
    {
        if(n-5 < absolute(hCount,sCount))
        {
            printf("Harun");
        }
        else
            printf("Cilek");
    }
    if(sCount > hCount)
    {
        if(n-5 < absolute(hCount,sCount))
        {
            printf("Sami");
        }
        else
            printf("Cilek");
    }
    
        

	return 0;
}
*/
