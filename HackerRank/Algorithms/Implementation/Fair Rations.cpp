#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0,cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum%2!=0)
    {
        printf("NO");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                a[i+1]++;
                cnt+=2;
            }
        }
        printf("%d",cnt);
    }
    return 0;
}
