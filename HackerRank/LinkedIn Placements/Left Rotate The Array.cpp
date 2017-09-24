#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{   
    int n,d;
    scanf("%d",&n);
    scanf("%d",&d);
    int i,a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=0;
    for(i=d;i<n;i++)
    {
        b[j] = a[i];
        j++;
    }
    for(i=0;i<d;i++)
    {
        b[j] = a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
