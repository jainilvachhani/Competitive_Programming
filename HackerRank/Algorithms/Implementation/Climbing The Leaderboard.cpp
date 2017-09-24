#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;


int main() 
{   
    stack <unsigned> a;
    int temp,n,m,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(a.empty() || temp != a.top())
        {
            a.push(temp);
        }
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&temp);
        while(!a.empty() && temp >=a.top())
        {
            a.pop();
        }
        printf("%d\n",a.size()+1);
    }
    return 0;
}
