
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int e=100,n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int init = 0;
    while(1)
    {
        e--;
        init = (init + k)%n;
        if(a[init]==1)
        {
            e--;
            e--;
        }
        if(e==0 || init == 0)
        {
            break;
        }
    }
    printf("%d",e);
    return 0;
}
