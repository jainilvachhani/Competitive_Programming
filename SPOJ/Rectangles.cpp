#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int sum = 0;
	int x = sqrt(n);
	int i,j;
	for(i=1;i<=x;i++)
	{
		for(j=i*i;j<=n;j+=i)
		{
			if(j>n)
			{
				break;
			}
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}