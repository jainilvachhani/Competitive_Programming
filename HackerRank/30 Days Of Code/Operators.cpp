#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    double a;
    cin>>a;
    int b,c;
    cin>>b;
    cin>>c;
    double ans = a + (a*b)/100 + (a*c)/100;
    int x  = ans;
    if(ans-x>0.5)
    {
        ans++;
    }
    printf("The total meal cost is %d dollars.",(int)ans);
    return 0;
}
