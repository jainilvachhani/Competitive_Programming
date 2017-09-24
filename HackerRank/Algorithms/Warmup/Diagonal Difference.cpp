#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,j,t=0;
    scanf("%d",&n);
    int x = n*n;
    int a[x];

    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=0,s=0;
    int w = n-1;
    for(i=0,j=w;i<x;i+=(n+1),j+=w)
    {
        m = m+a[i];
        s = s + a[j];
    }
    int e = m-s;
    if(e>0)
    {
        printf("%d",e);
    }
    else
    {
        printf("%d",-e);
    }
    return 0;
}
