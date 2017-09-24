#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
	int  t;
	while(1)
	{
		scanf("%d",&t);
		if(t==0)
		{
			return 0;	
		}
		int a[t],i;
		for(i=0;i<t;i++)
		{
			scanf("%d",&a[i]);
		}
		stack <int> x;
		i = 0;
		int cnt = 1;
		int b[t];
		int bpon = 0;
		for(i=0;i<t;i++)
		{
			b[i] = 0;
		}
		for(i=0;i<t;i++)
		{
			int inif = 0;
			if(a[i] == cnt || a[i]==cnt-1)
			{
				
				b[bpon] = a[i];
				bpon++;
				cnt++;
				inif = 1;
			}
			else if(!x.empty() &&( x.top()==cnt || x.top()==cnt-1))
			{
				while(!x.empty() &&(x.top()==cnt || x.top()==cnt-1))
				{
					b[bpon] = x.top();
					x.pop();
					cnt++;
					bpon++;
				}
			}
			if(inif==0)
			{
				x.push(a[i]);
			}
		}
		while(!x.empty())
		{
			b[bpon] = x.top();
			x.pop();
			bpon++;
		}
		sort(a,a+t);
		int pos = 1;
		for(i=0;i<t;i++)
		{
			if(a[i]!=b[i])
			{
				printf("no\n");
				pos = 0;
				break;
			}
		}
		if(pos)
		{
			printf("yes\n");
		}
	}
	return 0;
}