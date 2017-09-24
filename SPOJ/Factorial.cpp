#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int fives = 5,sum=0;
		while(1)
		{
			sum += n/fives;
			fives *=5;
			if(n/fives<1)
			{
				break;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}