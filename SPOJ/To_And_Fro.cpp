#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int l;
	while(1)
	{
		scanf("%d",&l);
		if(l==0)
		{
			break;
		}
		else
		{
			char a[201];
			scanf("%s",a);
			int row = strlen(a)/l;
			char ans[row][l];
			int n=0;
			int cnt = 0;
			while(1)
			{
				if(n>=row)
				{
					break;
				}
				else
				{
					int i;
					for(i=0;i<l;i++)
					{
						ans[n][i] = a[cnt];
						cnt++;
					}
					n++;
					
				}
				if(n>=row)
				{
					break;
				}
				else
				{
					int i;
					for(i=0;i<l;i++)
					{
						ans[n][l-i-1] = a[cnt];
						cnt++;
					}
					n++;
				}
			}
			int j,k;
			for(j=0;j<l;j++)
			{
				for(k=0;k<row;k++)
				{
					printf("%c",ans[k][j]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}