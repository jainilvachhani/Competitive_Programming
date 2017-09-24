#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int x1,x2,v1,v2;
    scanf("%d",&x1);
    scanf("%d",&v1);
    scanf("%d",&x2);
    scanf("%d",&v2);
    if(v1==v2 || v2>v1)
    {
        printf("NO\n");
    }
    else if((x2-x1)%(v2-v1)==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
