#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char one[100],two[100],thr[100];
		char a,b,c,d,e,f;
		int i;
		int machula;
		scanf("%s",one);
		scanf("%c",&a);
		scanf("%s",&b);
		scanf("%c",&c);
		//scanf("%c",&d);
		scanf("%s",two);
		scanf("%c",&e);
		scanf("%c",&f);
		scanf("%s",thr);
		for(i=0;i<strlen(one);i++)
		{
			if(one[i] == 'm')
			{
				machula = 1;
				break;
			}
		}
		for(i=0;i<strlen(two);i++)
		{
			if(two[i] == 'm')
			{
				machula = 2;
				break;
			}
		}
		for(i=0;i<strlen(thr);i++)
		{
			if(thr[i] == 'm')
			{
				machula = 3;
				break;
			}
		}
		//printf("mach is %d\n",machula);
		if(machula == 1)
		{
			int ans = atoi(thr) - atoi(two);
			printf("%d + ",ans);
			for(i=0;i<strlen(two);i++)
			{
				printf("%c",two[i]);
			}
			printf(" = ");
			for(i=0;i<strlen(thr);i++)
			{
				printf("%c",thr[i]);
			}
			printf("\n");
		//	printf("%d\n",ans);
		}
		if(machula == 2)
		{
			int ans = atoi(thr) - atoi(one);
			for(i=0;i<strlen(one);i++)
			{
				printf("%c",one[i]);
			}
			printf(" + ");
			printf("%d",ans);
			printf(" = ");
			for(i=0;i<strlen(thr);i++)
			{
				printf("%c",thr[i]);
			}
			
			printf("\n");
		}
		if(machula == 3)
		{
			
			int ans = atoi(one) + atoi(two);
			for(i=0;i<strlen(one);i++)
			{
				printf("%c",one[i]);
			}
			printf(" + ");
			for(i=0;i<strlen(two);i++)
			{
				printf("%c",two[i]);
			}
			printf(" = ");
			printf("%d\n",ans);
		
		}
	}
	return 0;
}