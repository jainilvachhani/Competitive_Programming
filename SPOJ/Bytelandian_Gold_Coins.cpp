#include <iostream>
#include <map>
using namespace std;

map <int,long long> dp;

int max(int a,int b)
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

long long int coins(int n)
{
	if(n<12)
	{
		return n;
	}
	else if(dp.count(n))
	{
		return dp[n];
	}
	else
	{
		dp[n] = coins(n/2)+coins(n/3)+coins(n/4);
		return dp[n];
	}
}

int main() {
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%lld\n",coins(n));
	}
	return 0;
}