#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    float p=0,ne=0,v=0;
    float p1,n1,v1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            ne++;
        }
        else if(a[i]>0)
        {
            p++;
        }
        else if(a[i]==0)
        {
            v++;
        }
    }
    p1 = p/n;
    n1 = ne/n;
    v1 = v/n;
    printf("%f\n",p1);
    printf("%f\n",n1);
    printf("%f\n",v1);
    return 0;
}
