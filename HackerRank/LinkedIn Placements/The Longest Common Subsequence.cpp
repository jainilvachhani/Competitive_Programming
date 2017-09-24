#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

int lcs(int input1[], int input2[], int n, int m)
{
	int ans,i,j;
	int t[n+1][m+1];
	for(i=0;i<=n;i++)
	{
		t[i][0] = 0;
	}
	for(i=0;i<=m;i++)
	{
		t[0][i] = 0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(input1[i-1] == input2[j-1])
			{
				t[i][j] = t[i-1][j-1] + 1;
			}
			else
			{
				t[i][j] = max(t[i-1][j], t[i][j-1]);
			}
		}
	}
	vector <int> x;
	i = n;
	j = m;
	while(i!=0 && j!=0)
	{
		int compare = max(t[i-1][j], t[i][j-1]);
		if(t[i][j] != compare)
		{
			x.push_back(input1[i-1]);
			j--;
			i--;
		}
		else if(compare == t[i-1][j])
		{
			i--;
		}
		else if(compare == t[i][j-1])
		{
			j--;
		}
	}
	reverse(x.begin(),x.end());
	for(i=0;i<x.size();i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
	return t[n][m];
}

int main() 
{
	int i,n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int input1[n], input2[m];
	for(i=0;i<n;i++)
	{
		scanf("%d",&input1[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&input2[i]);
	}
	int length = lcs(input1, input2, n, m);
	return 0;
}