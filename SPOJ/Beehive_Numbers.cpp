#include <iostream>
using namespace std;

int main() {
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==-1)
		{
			return 0;
		}
		int cnt = 0,i = 0;
		while(cnt<n)
		{
			cnt = 3*i*(i-1) + 1;
			i++;
		}
		if(cnt == n)
		{
			printf("Y\n");
		}
		else
		{
			printf("N\n");
		}
	}
}