#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main() 
{   
    int n;
    scanf("%d",&n);
    int a[101],i;
    for(i=0;i<101;i++)
    {
        a[i] = 0;
    }
    int max = 0;
    for(i=0;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        a[num]++;
        if(a[num]>max)
        {
            max = a[num];
        }
    }
    printf("%d",n-max);
    return 0;
}
