#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j,cnt = 0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%m==0)
            {
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}
