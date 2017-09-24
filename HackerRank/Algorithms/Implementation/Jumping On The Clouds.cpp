
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
    int a[n],i,cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x = 0;
    while(x<n-1)
    {
        if(a[x+2]!=1)
        {
            x = x+2;
        }
        else
        {
            x++;
        }
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}
