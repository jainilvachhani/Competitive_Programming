#include <iostream>
using namespace std;

int main() {
	int n,ans=0;
	scanf("%d",&n);
	while(n--)
	{
		int temp;
		scanf("%d",&temp);
		ans = ans^temp;
	}
	printf("%d",ans);
	return 0;
}