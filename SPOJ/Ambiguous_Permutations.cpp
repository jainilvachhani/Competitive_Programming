#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n=1;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		int i,a[n+1],b[n+1];
		a[0] = 0;
		b[0] = 0;
		for(i=1;i<=n;i++)
		{
		    int temp;
			scanf("%d",&temp);
			a[i] = temp;
			b[temp] = i;
		}
		int am = 1;
        for(i=0;i<=n;i++)
        {
            if(a[i]!=b[i])
            {
                printf("not ambiguous\n");
                am = 0;
                break;
            }
        }
        if(am)
        {
            printf("ambiguous\n");
        }
	}
	return 0;
}