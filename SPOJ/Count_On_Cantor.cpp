#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int sum=0,i=1;
		for(i=1;;i++)
		{
			sum+=i;
			if(sum>=n)
			{
				break;
			}
		}
		int temp = n - (sum -i);
		int tot = i+1;
		if(i%2==0)
		{
			printf("TERM %lld IS %lld/%lld\n",n,temp,tot-temp);
		}
		else
		{
			printf("TERM %lld IS %lld/%lld\n",n,tot-temp,temp);
		}
	}
	return 0;
}