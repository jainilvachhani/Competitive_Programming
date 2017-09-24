#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;


int main() 
{
    int n,i,cnt=0;
    scanf("%d",&n);
    int a[n],max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    while(max>0)
    {
        int min = INT_MAX;
        cnt = 0;
        for(i=0;i<n;i++)
        {
            if(a[i]<min && a[i]!=0)
            {
                min = a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                a[i] -= min;
                cnt++;
            }   
        }
        max = max-min;
        printf("%d\n",cnt);
        
    }
    return 0;
}
