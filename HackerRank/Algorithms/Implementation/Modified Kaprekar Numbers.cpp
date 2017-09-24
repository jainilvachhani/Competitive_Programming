#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    long long int q,p,i;
    scanf("%lld",&p);
    scanf("%lld",&q);
    int cnt = 0;
    for(i=p;i<=q;i++)
    {
        long long int d = 0,j=i;
        while(j!=0)
        {
            d++;
            j = j/10;
        }
        long long int x = i*i;
        long long int n = pow(10,d);
        long long int fir,sec;
        fir = x/n;
        sec = x%n;
        if(fir+sec==i)
        {
            printf("%lld ",i);
            cnt++;
        }
    }
    if(cnt==0)
    {
        printf("INVALID RANGE");
    }
    return 0;
}
