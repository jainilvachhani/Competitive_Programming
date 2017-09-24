#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,a[101],i;
    for(i=1;i<101;i++)
    {
        a[i] = 0;
    }
    scanf("%d",&n);
    int temp,cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        a[temp]++;
    }
    for(i=1;i<101;i++)
    {
        if(a[i]>=2)
        {
            cnt = cnt + (a[i]/2);
        }
    }
    printf("%d",cnt);
    return 0;
}
