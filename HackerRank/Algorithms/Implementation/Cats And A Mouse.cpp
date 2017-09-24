#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main() 
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int x,y,z;
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        int dis1 = abs(x-z),dis2 = abs(y-z);
        if(dis1==dis2)
        {
            printf("Mouse C\n");
        }
        else if(dis1>dis2)
        {
            printf("Cat B\n");
        }
        else
        {
            printf("Cat A\n");
        }    
    }
    
    return 0;
}
