#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,d;
    scanf("%d",&n);
    scanf("%d",&d);
    int i,a[2*10000 + 1],j,cnt=0,k;
    for(i=0;i<2*10000 + 1;i++)
    {
        a[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        a[temp]++;
    }
    for(i=0;i<2*10000 + 1 - d - d;i++)
    {
        cnt += min(a[i],min(a[i+d],a[i+d+d]));
    }
    printf("%d",cnt);
    return 0;
}
