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
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<38)
        {
            printf("%d\n",a[i]);
        }
        else if(a[i]%5>=3)
        {
            a[i] = a[i] + (5 - a[i]%5);
            printf("%d\n",a[i]);
        }
        else
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}