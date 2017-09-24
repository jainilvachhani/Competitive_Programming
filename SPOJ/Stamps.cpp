#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		int n,m;
		int imp=0;
		scanf("%d",&m);
		scanf("%d",&n);
		int i,a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			imp += a[i];
		}
		if(imp<m)
		{
			printf("Scenario #%d:\nimpossible\n\n",j+1);
			continue;
		}
		sort(a,a+n);
		reverse(a,a+n);
		int cnt=0,sum=0;
		i=0;
		while(sum<m)
		{
			sum +=a[i];
			i++;
			cnt++;
		}
		printf("Scenario #%d:\n%d\n\n",j+1,cnt);
		
	}
	return 0;
}