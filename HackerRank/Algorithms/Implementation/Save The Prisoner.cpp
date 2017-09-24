#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,s;
        scanf("%d",&n);
        scanf("%d",&m);
        scanf("%d",&s);
        if((m+s-1)%n == 0)
        {
            printf("%d\n",n);
        }
        else
        {
            printf("%d\n",(m+s-1)%n);   
        }
    }
    return 0;
}
