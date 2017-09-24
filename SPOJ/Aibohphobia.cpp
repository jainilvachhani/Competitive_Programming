#include <iostream>
#include <string.h>
using namespace std;

int max(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int lcs(char a[], char b[], int n, int m)
{
	int l[n+1][m+1],i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(i==0 || j==0)
			{
				l[i][j] = 0;
			}
			else if(a[i-1] == b[j-1])
			{
				l[i][j] = 1 + l[i-1][j-1];
			}
			else
			{
				l[i][j] = max(l[i-1][j], l[i][j-1]);
			}
		}
	}
	return l[n][m];
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[10000];
		scanf("%s",a);
		char rev[10000];
		int i;
		int len=strlen(a);
		for(i=0;i<len;i++)
		{
			rev[i] = a[len-i-1];
		}
		int ans = len - lcs(a,rev,len,len);
		printf("%d\n",ans);
	}
	return 0;
}
