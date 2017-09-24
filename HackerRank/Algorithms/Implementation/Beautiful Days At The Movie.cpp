#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int reverse(int x, int k)
{
    int ans = 0,ten =0,rem,num = x;
    while(x!=0)
    {
        rem = x%10;
        ans = ans*10 + rem;
        x = x/10;
    }
    if(abs(num-ans)%k==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



int main() 
{
    int x,y,k,i,ans=0;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&k);
    for(i=x;i<=y;i++)
    {
        ans += reverse(i,k);
    }
    printf("%d",ans);
    return 0;
}
