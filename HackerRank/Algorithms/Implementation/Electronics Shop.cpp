#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;


int main() 
{
    int s,n,m,i;
    scanf("%d",&s);
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+m);
    if(a[0]+b[0]>s)
    {
        printf("-1");
        return 0;
    }
    reverse(a,a+n);    
    int j=0,max=-1;
    for(i=0,j=0;i<n;i++)
    {
        for(;j<m;j++)
        {
            if(a[i]+b[j]>s)
            {
                break;
            }
            if(a[i]+b[j]>max)
            {
                max = a[i]+b[j];
            }
        }  
    }
    printf("%d",max);
    return 0;
}
