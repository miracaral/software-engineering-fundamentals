#include <stdio.h>

int main() 
{
    int n,x,y,q;
    int arr[100005];
    int prev[100005];
    
    scanf("%d %d",&n,&q);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        prev[i] = prev[i-1] + arr[i];
    }
    
    for(int i=1;i<=q;i++)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",prev[y] - prev[x-1]);
    }

	return 0;
}