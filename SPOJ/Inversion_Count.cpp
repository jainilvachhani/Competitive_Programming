#include <iostream>
#include <limits.h>
using namespace std;

long long int merge(long long int a[], long long int p,long long int q,long long int r)
{
	long long int n1 = q - p + 1;
	long long int inv = 0;
	long long int n2 = r - q;
	long long int L[n1+1],R[n2+1];
	long long int i;
	for(i=0;i<n1;i++)
	{
		L[i] = a[p+i];
	}
	for(i=0;i<n2;i++)
	{
		R[i] = a[q+i+1];
	}
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	long long int k,j;
	j = 0;
	i = 0;
	for(k=p;k<=r;k++)
	{
		if(L[i]<=R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			inv += q - p - (i - 1);
			j++;
		}
	}
	return inv;
}

long long int sort(long long int a[],long long int p,long long int r)
{
	long long int q = (p+r)/2;
	long long int inv = 0;
	if(p < r)
	{
	 	inv+= sort(a,p,q);
		inv+= sort(a,q+1,r);
		inv+= merge(a,p,q,r);
	}
	return inv;
}

int main() {
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int i,a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
	long long int ans;
		ans = sort(a,0,n-1);
		printf("%lld\n",ans);
	}
	
	return 0;
}