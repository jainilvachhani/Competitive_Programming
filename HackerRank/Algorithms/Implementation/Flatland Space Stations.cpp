#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;


int main() 
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[m],i;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+m);
    int j=0,max=INT_MAX,ind = 0;
    for(i=0;i<n;i++)
    {
        if(a[j+1]==i && j!=m)
        {
            j++;
        }
        max = min(abs(i-a[j]),abs(i-a[j+1]));
        if(ind<max)
        {
            ind = max;  
        }
    }
    printf("%d",ind);
    return 0;
}
