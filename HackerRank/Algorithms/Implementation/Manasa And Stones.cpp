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
        int i,n,a,b;
        scanf("%d",&n);
        scanf("%d",&a);
        scanf("%d",&b);
        vector <int> aa;    
        int temp = n;
        while(temp!=0)
        {
            aa.push_back(((temp-1)*a) + (n-temp)*b);
            temp--;
        }
        temp = n;
        sort(aa.begin(),aa.end());
        for(i=0;i<aa.size();i++)
        {
            if(aa[i]==aa[i+1])
            {
                aa[i] = -1;
            }
        }
        for(i=0;i<aa.size();i++)
        {
            if(aa[i]!=-1)
            {
                printf("%d ",aa[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
