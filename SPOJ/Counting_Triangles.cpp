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
		long long int ans = (n)*(n+2)*((2*n)+1);
		ans = ans/8;
		printf("%lld\n",ans);
	}
	return 0;
}