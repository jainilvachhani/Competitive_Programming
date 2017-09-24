#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int i,temp = 1;
		if(n==1)
		{
		    printf("192\n");
            continue;
		}
		else
		{
		    printf("%lld\n",(n-1)*250 + 192);
		}
	}
	return 0;
}