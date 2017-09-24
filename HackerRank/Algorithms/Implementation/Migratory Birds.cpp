#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,a[6],i;
    for(i=1;i<6;i++)
    {
        a[i] = 0;
    }
    int temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        a[temp]++;
    }
    int max=0,index=1;
    for(i=1;i<6;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            index = i;
        }
    }
    printf("%d",index);
    return 0;
}
