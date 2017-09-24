#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int h,w;
		scanf("%d",&h);
		scanf("%d",&w);
		int a[h][w+2]={0};
        a[0][w+1]=0;
		int i,j;
		for(i=0;i<h;++i)
		{
			for(j=1;j<=w;++j)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=h-2;i>=0;--i)
		{
			for(j=1;j<=w;++j)
			{
				a[i][j]+=max(a[i+1][j-1],max(a[i+1][j],a[i+1][j+1]));
			}
		}
		int ans = a[0][1];
		for(i=2;i<=w;++i)
		{
			if(a[0][i]>ans)
			ans = a[0][i];
		}
		printf("%d\n",ans);
		
	}
	return 0;
}