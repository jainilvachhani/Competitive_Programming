#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int main() {

	int n;
	scanf("%d",&n);
	while(n--)
	{
		int num1,num2;
		scanf("%d",&num1);
		scanf("%d",&num2);
		int new1=0,new2=0;
		int tens = 1;
		while(num1 >0)
		{
			new1 = new1*10 + num1%10;
        	num1 = num1/10;
		}
		tens = 1;
		while(num2 >0)
		{
			new2 = new2*10 + num2%10;
        	num2 = num2/10;
		}
		int total = new1 + new2;
		int newtotal = 0;
		while(total>0)
		{
			newtotal = newtotal*10 + total%10;
        	total = total/10;
		}
		printf("%d\n",newtotal);
	}
	
	
}