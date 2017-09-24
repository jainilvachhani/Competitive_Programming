#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;


int main() 
{
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    int ans;
    ans = min(p/2, (n/2 - p/2));
    printf("%d",ans);
    return 0;
}
