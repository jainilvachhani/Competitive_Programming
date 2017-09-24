#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,m,d;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&d);
    scanf("%d",&m);
    int cnt=0,j,temp;
    for(i=0;i<n-m+1;i++)
    {
        temp = 0;
        for(j=i;j<m+i;j++)
        {
            temp = temp + a[j];
        }
        if(temp==d)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
