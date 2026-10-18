#include <stdio.h>

int main()
{
    int a,b,c,*pa,*pb;
    a=-5;b=-2;c=7;
    pa=&a;
    pb=&b;
    *pa= 3 + *pb;
    pb=&b;
    for(a=0;a<=4;a++)
    {
        if(a%2==0) c = (*pa+*pb)+b--;
        else c = (*pa+*pb)+b++;
        printf("b=%d c=%d\n",b,c);
    }
}