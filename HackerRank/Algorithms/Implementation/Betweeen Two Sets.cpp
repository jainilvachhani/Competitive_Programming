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
    int i,a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int gcd = b[0];
    for(i=1;i<m;i++)
    {
        gcd = __gcd(gcd,b[i]);
    }
    int cnt=0,lcm = a[0];
    for(i=1;i<n;i++)
    {
        lcm = (a[i]*lcm)/__gcd(a[i],lcm);
    }
    int multiple = lcm;
    while(multiple<=gcd)
    {
        if(gcd%multiple==0)
        {
            cnt++;
        }
        multiple += lcm;
    }
    printf("%d",cnt);
    return 0;
}
