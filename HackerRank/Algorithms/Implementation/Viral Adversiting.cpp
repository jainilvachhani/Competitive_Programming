#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int x = 5,i,n,ans = 0;
    scanf("%d",&n);
    int temp = x/2,old = x;
    for(i=0;i<n;i++)
    {
        temp = x/2,old = x;
        x =  temp*3;
        ans = ans + temp;
    }
    printf("%d",ans);
    return 0;
}
