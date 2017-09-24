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
        int n,k;
        scanf("%d",&n);
        scanf("%d",&k);
        if(k==0)
        {
            int i;
            for(i=1;i<=n;i++)
            {
                printf("%d ",i);
            }
            printf("\n");
        }
        else if(k>n/2)
        {
            printf("-1\n");
        }
        else 
        {
            if(n%2!=0)
            {
                printf("-1\n");    
            }
            else if(n%(2*k)!=0)
            {
                printf("-1\n");    
            }
            else
            {
                int cnt=0,i,j,fir=k+1,sec=1;
                while(cnt!=n)
                {
                    for(i=1;i<=k;i++)
                    {
                        printf("%d ",fir);
                        fir++;
                        cnt++;
                    }
                    fir = fir+k;
                    for(i=1;i<=k;i++)
                    {
                        printf("%d ",sec);
                        sec++;
                        cnt++;
                    }
                    sec = sec+k;
                }
                printf("\n");
                
            }
        }
    }
    return 0;
}
