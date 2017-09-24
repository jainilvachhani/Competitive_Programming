#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int a[3],b[3];
    int al=0,bo=0,i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            al++;
        }
        else if(b[i]>a[i])
        {
            bo++;
        }
    }
    printf("%d %d",al,bo);
    return 0;
}
