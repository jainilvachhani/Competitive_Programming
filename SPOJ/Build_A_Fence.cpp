#include <iostream>
#define pi 3.14159265358979323846
using namespace std;

int main() {
	while(1)
	{
		double  n;
	 	scanf("%lf",&n);
	 	if(n== 0)
	 	{
	 		break;
	 	}
	 	double r = n/pi;
	 	double ans = pi*r*r/2.0;
	 	printf("%.2lf\n",ans);
	}
	return 0;
}