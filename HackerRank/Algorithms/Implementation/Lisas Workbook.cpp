#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,k,cnt=0,page=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        page++;
        int j,temp = 0;
        for(j=1;j<=a[i];j++)
        {
            if(j==page)
            {
                cnt++;
            }
            if(j%k==0 && j!=a[i])
            {
                page++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}
