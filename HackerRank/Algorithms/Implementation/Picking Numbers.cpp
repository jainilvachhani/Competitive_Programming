#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int a[101],i,n;
    for(i=0;i<101;i++)
    {
        a[i] = 0;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        a[temp]++;
    }
    int cur=0,max=0;
    for(i=0;i<100;i++)
    {
        cur = a[i] + a[i+1];
        if(cur>max)
        {
            max = cur;
        }
    }
    printf("%d",max);
    return 0;
}
