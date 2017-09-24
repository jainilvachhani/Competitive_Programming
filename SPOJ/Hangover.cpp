#include <iostream>
#include <string.h>
using namespace std;

int main() {
	while(1)	
	{
		float a;
		scanf("%f",&a);
		if(a == 0.00)
		{
			break;
		}
		float length = 0;
		int card = 1;
		while(length<=a)
		{
			float t  = (1.00)/(1.00 + card);
			
			length += t;
			card++;
		}
		printf("%d card(s)\n",card-1);
	}
	return 0;
}