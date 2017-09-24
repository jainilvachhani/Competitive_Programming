#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long int t,l=1,u=3;
    scanf("%lld",&t);
    while(t-l>=u)
    {
        l = l+u;
        u *=2;
    }
    printf("%lld",u-(t-l));
    return 0;
}
