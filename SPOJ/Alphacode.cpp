#include <iostream>
#include <string.h>
using namespace std;

int main() {
	while(1)	
	{
		char a[5010];
		
		scanf("%s",&a);
		if(a[0]=='0')
		{
			break;
		}
		unsigned long long int dp[5010];
		memset(dp,0,5010);
		dp[0]=1;
		long long int i;
		for(i=1;i<=strlen(a)-1;i++)
		{
			long long int x = (a[i-1]-'0')*10 + (a[i]-'0');
			if(a[i] - '0')
			{
				dp[i] = dp[i-1];
			}
			if(x <=26 && x >=10)
			{
				if(i-2<0)
				{
					dp[i] += dp[0];
				}
				else
				{
					dp[i] += dp[i-2];
				}
			}
		}
		printf("%lld\n",dp[strlen(a)-1]);
	}
	return 0;
}