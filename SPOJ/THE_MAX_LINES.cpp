#include <iostream>

int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int r;
        scanf("%d",&r);
        double ans = (double)4*r*r +0.25;
        printf("Case %d: %.2f\n",j+1,ans);
    }
}