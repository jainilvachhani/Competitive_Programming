#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        printf("%d\n",(int)floor(sqrt(b)) - (int)ceil(sqrt(a)) + 1);
    }
    return 0;
}
