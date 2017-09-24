#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
	int  t;
	scanf("%d",&t);
	while(t--)
	{
	 	long long int three,lastthree,sum;
		scanf("%lld",&three);
		scanf("%lld",&lastthree);
		scanf("%lld",&sum);
		long long int n;
		n = (2*sum)/(three+lastthree);
		printf("%lld\n",n);
		long long int d = (lastthree - three)/(n-5);
		long long int a = three - 2*d;
		long long int i;
		for(i=0;i<n;i++)
		{
			printf("%lld ",a);
			a = a+d;
		}
		printf("\n");
	}
	return 0;
}