#include <iostream>
#include <string.h>
using namespace std;

long long int modular_exponentiation(long long int a, long long int b, long long int mod)
{
	long long ans = 1;
	while(b>0)
	{
		if(b%2==1)
		{
			ans = (ans*a)%mod;
		}
		b >>= 1;
		a = (a*a)%mod;
	}
	return ans;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int b;
		char a[100000];
		scanf("%s",a);
		scanf("%lld",&b);
		int len = strlen(a);
		long long int c = a[len-1] - '0'; 
		printf("%lld\n",modular_exponentiation(c,b,10));
	}
	return 0;
}