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
        int n,cnt=0,x;
        scanf("%d",&n);
        x = n;
        while(n)
        {
            int temp = n%10;
            if(temp!=0 && x%temp==0)
            {
                cnt++;
            }
            n = n/10;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
