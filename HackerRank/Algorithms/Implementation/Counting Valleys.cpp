#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,i,lev=0,val=0;
    bool sea=false;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='U')
        {
            lev++;
        }
        else
        {
            lev--;
        }
        if(!sea && lev<0)
        {
            val++;
            sea = true;
        }
        if(lev>=0)
        {
            sea = false;
        }
    }
    printf("%d",val);
    return 0;
}
