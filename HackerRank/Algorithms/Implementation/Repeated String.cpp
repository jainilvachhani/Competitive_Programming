#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


int main()
{
    char a[1000];
    scanf("%s",a);
    long long int n,i,cnt=0;
    scanf("%lld",&n);
    if(strlen(a)>=n)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]=='a')
            {
                cnt++;
            }
        }
        printf("%lld",cnt);
        return 0;
    }
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a')
        {
            cnt++;
        }
    }
    long long int div = n/(int)strlen(a);
    long long int rem = n - div*(int)strlen(a);
    cnt = cnt*(div);
    for(i=0;i<rem;i++)
    {
        if(a[i]=='a')
        {
            cnt++;
        }
    }
    printf("%lld",cnt);
    return 0;
}
