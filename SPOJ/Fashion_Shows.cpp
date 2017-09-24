#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int i,a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+n);
		int max = 0;
		for(i=0;i<n;i++)
		{
			max += a[i]*b[i];
		}
		printf("%d\n",max);
	}
	return 0;
}