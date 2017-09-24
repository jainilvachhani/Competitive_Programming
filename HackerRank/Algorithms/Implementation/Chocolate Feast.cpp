#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t, n, c, m,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        scanf("%d", &c);
        scanf("%d", &m);
        int z = (n/c);
        int x = z;
        while(z>=m)
        {
            z = z - m;
            x++;
            z++;
        }
        printf("%d\n",x);
    }
    return 0;
}
