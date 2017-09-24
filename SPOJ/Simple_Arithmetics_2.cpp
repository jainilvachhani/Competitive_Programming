#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int ans;
		int num;
		scanf("%d",&num);
		ans = num;
		while(1)
		{
			char c;
			cin>>c;
			if(c=='=')
			{
				break;
			}
			scanf("%d",&num);
			if(c=='/')
			{
				ans = ans / num;
			}
			else if(c=='*')
			{
				ans = ans * num;
			}
			else if(c=='+')
			{
				ans = ans + num;
			}
			else if(c=='-')
			{
				ans = ans - num;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}