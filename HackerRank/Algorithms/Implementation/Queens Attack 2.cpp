#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,i,q,cnt=0;
    scanf("%d",&n);
    scanf("%d",&q);
    int cq,rq;
    scanf("%d",&rq);
    scanf("%d",&cq);
    int u=n-rq,d=rq-1,l=cq-1,r=n-cq,diff;
    int lld=min(rq-1,cq-1);
    int lrd=min(rq-1,n-cq);
    int uld=min(n-rq,cq-1);
    int urd=min(n-rq,n-cq);
    for(i=0;i<q;i++)
    {
        int ro,co;
        scanf("%d",&ro);
        scanf("%d",&co);
        if(co==cq && ro<rq)
        {
            diff = d-ro;
            if(diff<d)
            {
                d=diff;    
            }
        }
        else if(co==cq && ro>rq)
        {
            diff = ro-rq-1;
            if(diff<u)
            {
                u=diff;
            }
        }
        else if(ro==rq && co<cq)
        {
            diff = l-co;
            if(diff<l)
            {
                l = diff;   
            }
        }
        else if(ro==rq && co>cq)
        {
            diff = co - cq - 1;
            if(diff<r)
            {
                r =diff;
            }
        }
        else if(abs(ro-rq) == abs(co-cq))
        {
            diff = abs(ro-rq)-1;
            if(ro<rq && co<cq && diff<lld)
            {
                lld = diff;
            }
            else if(ro<rq && co>cq && diff<lrd)
            {
                lrd = diff;
            }
            else if(ro>rq && co<cq && diff<uld)
            {
                uld = diff;
            }
            else if(ro>rq && co>cq && diff<urd)
            {
                urd = diff;
            }
        }
    }
    cnt = d+u+l+r+lld+lrd+uld+urd;
    printf("%d\n",cnt);
    return 0;
}
