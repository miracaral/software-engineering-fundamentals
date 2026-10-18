#include <stdio.h>
#include <stdlib.h>

union test
{
    char a;
    int x;
    float y;
};

int main()
{
    union test t;

    t.x=2;
    printf("%d\n",t.x);
    
    printf("Unionumuzun tuttugu alan %lu byte'dir\n",sizeof(t));

    t.y=10;
    printf("%f\n",t.y);
    return 0;
}