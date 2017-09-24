#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int s,t,a,b,m,n;
    scanf("%d",&s);
    scanf("%d",&t);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&m);
    scanf("%d",&n);
    int i,x[m],y[n],cnt1=0,cnt2=0;
    for(i=0;i<m;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]+a<=t && x[i]+a>=s)
        {
            cnt1++;
        }
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
        if(y[i]+b<=t && y[i]+b>=s)
        {
            cnt2++;
        }
    }
    printf("%d\n%d\n",cnt1,cnt2);
    return 0;
}