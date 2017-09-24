#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,k,q;
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%d",&q);
    k = k%n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<q;i++)
    {
        int m;
        scanf("%d",&m);
        printf("%d\n",a[(n - (k % n)+ m) % n]);
    }
    return 0;
}
