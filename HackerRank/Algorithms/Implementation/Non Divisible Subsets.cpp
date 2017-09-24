#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main() 
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[k],i;
    for(i=0;i<k;i++)
    {
        a[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        a[num%k]++;
    }
    int total = min(a[0],1);
    if(k%2==0)
    {
        for(i=1;i<k/2;i++)
        {
            total = total + max(a[i],a[k-i]);
        }
        if(a[k/2]>0)
        {
            total++;
        }
    }
    else
    {
        for(i=1;i<(k/2)+1;i++)
        {
            total = total + max(a[i],a[k-i]);
        }
    }
    printf("%d",total);
    return 0;
}
