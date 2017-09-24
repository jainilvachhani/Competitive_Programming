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


int main()
{
    int n,i;
    scanf("%d",&n);
    vector <int> a;
    while(n!=0)
    {
        if(n%2==0)
        {
            a.push_back(0);
        }
        else
        {
            a.push_back(1);
        }
        n = n/2;
    }
    int max=0,far=0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==0)
        {
            max = 0;
        }
        else
        {
            max++;
        }
        if(far<max)
        {
            far = max;
        }
    }
    printf("%d\n",far);
    return 0;
}
