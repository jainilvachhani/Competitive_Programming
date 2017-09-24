#include <iostream>
using namespace std;

int main() {
	while(1)
	{
		int a,b,c;
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		if(a==0 && b==0 && c==0)
		{
			break;
		}
		if(b-a == c-b)
		{
			printf("AP ");
			int d = b-a;
			printf("%d\n",c+d);
		}
		else if(b/a == c/b)
		{
			printf("GP ");
			int d = c/b;
			printf("%d\n",c*d);
		}
	}
	return 0;
}