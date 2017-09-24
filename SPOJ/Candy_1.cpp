#include <iostream>
using namespace std;

int main() {
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==-1)
		{
			break;
		}
		else
		{
			int a[n],i;
			int mean = 0;
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
				mean += a[i];
			}
			if(mean%n==0)
			{
				mean = mean/n;
				int ans = 0;
				for(i=0;i<n;i++)
				{
					if(a[i]<mean)
					{
						ans = ans + mean - a[i];
					}
				}
				printf("%d\n",ans);
			}
			else
			{
				printf("-1\n");
			}
			
		}
	}
	return 0;
}