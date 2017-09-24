#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    scanf("%d",&n);
    int j,a[n],i,dis=INT_MAX,cnt=INT_MAX;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cnt = abs(i-j);
                if(cnt<dis)
                {
                    dis = cnt;
                }
            }
        }
    }
    if(dis == INT_MAX)
    {
        printf("-1");
    }
    else
    {
        printf("%d",dis);    
    }
    return 0;
}
