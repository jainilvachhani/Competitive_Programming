#include <iostream>
#include <string.h>
using namespace std;

int min(int a, int b, int c)
{
	if(a<=b && a<=c)
	{
		return a;
	}
	else if(b<=a && b<=c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
int editdis(char a[], char b[], int n, int m)
{
	int dp[n+1][m+1];
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(i==0)
			{
				dp[i][j] = j;
			}
			else if(j==0)
			{
				dp[i][j] = i;
			}
			else if(a[i-1] == b[j-1])
			{
				dp[i][j] = dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = 1 + min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);  
			}
		}
	}
	return dp[n][m];
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[2001],b[2001];
		scanf("%s",a);
		scanf("%s",b);
		int ans = editdis(a,b,strlen(a),strlen(b));
		printf("%d\n",ans);
	}
	return 0;
}