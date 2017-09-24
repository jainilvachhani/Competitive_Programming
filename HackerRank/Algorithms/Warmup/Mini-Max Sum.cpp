#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long int i,a[5];
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+5);
    long long int mi=0,ma=0;
    for(i=0;i<4;i++)
    {
        mi = mi + a[i];
    }
    reverse(a,a+5);
    for(i=0;i<4;i++)
    {
        ma = ma + a[i];
    }
    printf("%lld %lld\n",mi,ma);
    return 0;
}
