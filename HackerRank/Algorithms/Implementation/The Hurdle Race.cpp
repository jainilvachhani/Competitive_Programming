#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int i,a[n],max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    if(k>max)
    {
        printf("0");
    }
    else
    {
        printf("%d",max-k);
    }
    return 0;
}
