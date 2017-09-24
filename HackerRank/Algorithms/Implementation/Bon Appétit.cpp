#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;


int main() 
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int i,a[n],cost=0,charge;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i!=k)
        {
            cost += a[i];
        }
    }
    cost = cost/2;
    scanf("%d",&charge);
    if(cost==charge)
    {
        printf("Bon Appetit");
    }
    else
    {
        printf("%d",abs(cost-charge));
    }
    return 0;
}
