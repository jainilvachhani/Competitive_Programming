#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int i,n,max,min,maxcnt=0,mincnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);       
    }
    max = a[0];
    min = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            maxcnt++;
        }
        else if(a[i]<min)
        {
            min = a[i];
            mincnt++;
        }
    }
    printf("%d %d\n",maxcnt,mincnt);
    return 0;
}
