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
    int i,a[n+1],j;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[a[j]]==i)
            {
                printf("%d\n",j);
            }
        }
        
    }
    return 0;
}
