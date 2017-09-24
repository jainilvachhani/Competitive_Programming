#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[401];
		scanf("%s",a);
		int i;
		int cnt = 1;
		stack<char> mystack;
		mystack.push(a[0]);
		for(i=1;i<strlen(a);i++)
		{
			if(a[i]=='(')
			{
				cnt++;
			}
			else if(a[i]==')')
			{
				printf("%c",mystack.top());
				mystack.pop();
				cnt--;
			}
			else if(a[i]=='+' ||a[i]=='-' ||a[i]=='*' ||a[i]=='/' ||a[i]=='^')
			{
				mystack.push(a[i]);
			}
			else
			{
				printf("%c",a[i]);
			}
			if(cnt == 0)
			{
				break;
			}
		}
		printf("\n");
	}
	return 0;
}