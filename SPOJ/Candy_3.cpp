#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int i,sum=0,a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum = (sum + a[i])%n;
			
		}
	
		if(sum%n==0)
		{
			printf("YES\n");
		}
		
		else if(sum%n!=0)
		{
			printf("NO\n");
		}
	}
	return 0;
}