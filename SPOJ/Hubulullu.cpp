#include <iostream>

int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int n;
        int p;
        scanf("%d",&n);
        scanf("%d",&p);
        if(p==1)
        {
            printf("Pagfloyd wins.\n");
        }
        else
        {
            printf("Airborne wins.\n");
        }
    }
}