#include <stdio.h>

int main()
{
    int t,j,n;
    scanf("%d",&n);
    scanf("%d",&t);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<t;j++)
    {
        int e,f,q,small=3;
        scanf("%d",&e);
        scanf("%d",&f);
        for(q=e;q<f+1;q++)
        {
            if(small > a[q])
            {
                small = a[q];
            }
        }
        printf("%d\n",small);
 }
 return 0;
}


