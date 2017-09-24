
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    reverse(a,a+n);
    int c = 1;
    i=0;
    while(a[i]==a[i+1])
    {
        c++;
        i++;
    }
    printf("%d",c);
    return 0;
}