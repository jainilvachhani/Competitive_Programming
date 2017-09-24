#include <stdio.h>

int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int n;
        scanf("%d",&n);
        if(n == 0)
        {
            printf("1\n");
        }
        else if(n%2 == 0)
        {
            int i,h = 1,k = n/2;
            for(i=0;i<k;i++)
            {
                h = h*2;
                h++;
            }
            printf("%d\n",h);
        }
        else
        {
            int i,h = 1,k = (n-1)/2;
            for(i=0;i<k;i++)
            {
                h = h*2;
                h++;
            }
            h = 2*h;
            printf("%d\n",h);
        }
    }
 return 0;
}

