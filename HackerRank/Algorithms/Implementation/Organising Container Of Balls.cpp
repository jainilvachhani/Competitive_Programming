#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        int i,j;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            a[i] = 0;
            b[i] = 0;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                int temp;
                scanf("%d",&temp);
                a[i]+=temp;
                b[j]+=temp;
            }
        }
        sort(a,a+n);
        sort(b,b+n);
        string s = "Possible";
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                s = "Impossible";
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
