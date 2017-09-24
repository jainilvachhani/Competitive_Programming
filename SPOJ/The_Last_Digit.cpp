#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b;
		scanf("%lld",&a);
		scanf("%lld",&b);
		long long int d = 1;
		while(b)
		{
			if(b%2!=0)
			{
				d = (d*a)%10;
			}
			b>>=1;
			a = (a*a)%10;
		}
		printf("%lld\n",d);
	}
	return 0;
}