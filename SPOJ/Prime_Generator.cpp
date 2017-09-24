#include <iostream>
#include <math.h>
#define MAX 1000000000
bool prime[MAX+3] = {0};
int sqrt32000 = sqrt(32000);
using namespace std;

void sieve()
{
	for(int i=2;i<=sqrt32000;i++)
	{
		if(prime[i]==0)
		{
			for(int j = i*i; j<=32000;j+=i)
			{
				prime[j] = 1;
			}
		}
	}
}

void segmentseive(long long a, long long b)
{
	for(int i = a;i<=b;i++)
	{
		if(prime[i]==0)
		{
			for(int j =2;j*j<=i;j++)
			{
				if(prime[j]==0)
				{
					if(i%j==0)
					{
						prime[i] =1;
						break;
					}
				}
			}
		}
	}
}

void show(long long a, long long b)
{
	for(int i = a;i<=b;i++)
	{
		if(prime[i]==0)
		{
			printf("%d\n",i);
		}
	}
}

int main() {
	prime[0] = 1;
	prime[1] = 1;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		long long int num1,num2;
		scanf("%lld",&num1);
		scanf("%lld",&num2);
		sieve();
		if(num2<32000)
		{
			show(num1,num2);
		}
		else
		{
			segmentseive(num1,num2);
			show(num1,num2);
		}
		printf("\n");
	}
	
	return 0;
}