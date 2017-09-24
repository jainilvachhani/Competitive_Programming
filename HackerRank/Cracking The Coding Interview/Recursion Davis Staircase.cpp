#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int davis(int n)
{
    int a[n+1],i;
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    for(i=4;i<=n;i++)
    {
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }
    return a[n];
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",davis(n));
    }
    return 0;
}
