#include <iostream>
using namespace std;
int root(int a[],int i)
{
	while(a[i]!=i)
	{
		i = a[i];
	}
	return i;
}

void uni (int a[],int x,int y)
{
	int rootx = root(a,x);
	int rooty = root(a,y);
	a[rootx] = rooty;
}

int main() {
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	if(m!=n-1)
	{
		printf("NO\n");
		return 0;
	}
	int i,a[n];
	for(i=0;i<n;i++)
	{
		a[i] = i;
	}
	for(i=0;i<m;i++)
	{
		int root,parent;
		scanf("%d",&root);
		scanf("%d",&parent);
		root--;
		parent--;
		uni(a,root,parent);
	}
	int one=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			one++;
		}
		if(one==2)
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}