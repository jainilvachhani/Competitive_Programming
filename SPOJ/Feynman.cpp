#include <iostream>
using namespace std;

int main() {
	while(1)
	{
		int t;
		scanf("%d",&t);
		if(t==0)
		{
			break;
		}
		int ans = (t*(t+1)*((2*t)+1))/6;
		printf("%d\n",ans);
	}
	return 0;
}