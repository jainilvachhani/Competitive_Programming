#include <stdio.h>
int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        printf("%d\n",n);
        fflush(stdout);
        if(n==42)
        {
            break;
        }
    }
}