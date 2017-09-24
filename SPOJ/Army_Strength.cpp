#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d",&n);
		scanf("%d",&m);
		int i,a[n],b[m];
		int amax = 0, bmax = 0;
		for(i=0;i<n;i++)
		{
		    scanf("%d",&a[i]);
		    if(a[i]>amax)
		    {
		        amax = a[i];
		    }
		}
		for(i=0;i<m;i++)
		{
		    scanf("%d",&b[i]);
		    if(b[i]>bmax)
		    {
		        bmax = b[i];
		    }
		}
		if(bmax>amax)
		{
		    printf("MechaGodzilla\n");
		}
		else
		{
		    printf("Godzilla\n");
		}
	}
	return 0;
}