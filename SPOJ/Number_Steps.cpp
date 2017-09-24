#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y;
		scanf("%d",&x);
		scanf("%d",&y);
		if(x-y==0)
		{
			if(x%2!=0)
			{
				printf("%d\n",x+y-1);
			}
			else if(x%2==0)
			{
				printf("%d\n",x+y);
			}
		}
		else if(x-y==2)
		{
			if(x%2!=0)
			{
				printf("%d\n",x+y-1);
			}
			else if(x%2==0)
			{
				printf("%d\n",x+y);
			}
		}
		else
		{
			printf("No Number\n");
		}

	}
	return 0;
}