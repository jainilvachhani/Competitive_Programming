#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main() 
{
    queue <int> a;
    int q, type, x;
    scanf("%d",&q);
    for(int i = 0; i < q; i++) 
    {
        scanf("%d",&type);
        if(type == 1) 
        {
            scanf("%d",&x);
            a.push(x);
        }
        else if(type == 2) 
        {
            a.pop();
        }
        else
        {
            printf("%d\n",a.front());   
        }
    }
    return 0;
}
