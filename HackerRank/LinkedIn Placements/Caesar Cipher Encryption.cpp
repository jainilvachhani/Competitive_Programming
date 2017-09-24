#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int n,k,i;
    scanf("%d",&n);
    char a[1000];
    scanf("%s",a);
    scanf("%d",&k);
    k = k%26;
    for(i=0;i<n;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i] = (a[i] + k)%65;
            a[i] = a[i]%26;
            a[i] = a[i] + 65;
        }
        else if(a[i]>=97 && a[i]<= 122)
        {
            a[i] = (a[i] + k)%97;
            a[i] = a[i]%26;
            a[i] = a[i] + 97;
        }
    }
    printf("%s",a);
    return 0;
}
