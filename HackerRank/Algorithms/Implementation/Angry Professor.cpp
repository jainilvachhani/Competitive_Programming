#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int n,k;
        scanf("%d",&n);
        scanf("%d",&k);
        int a[n],b=0,i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<1)
            {
                b++;
            }
        }
        if(b>=k)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");    
        }   
    }
    return 0;
}
