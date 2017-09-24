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
    int m;
    int n,i;
    scanf("%d",&n);
    scanf("%d",&m);
    map <string, int> a;
    for(i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        if(a.count(temp)>0)
        {
            a[temp]++;
        }
        else
        {
            a[temp] = 1;
        }
    }
    for(i=0;i<m;i++)
    {
        string temp;
        cin>>temp;
        if(a[temp]==0)
        {
            printf("No\n");
            return 0;
        }
        else if(a.count(temp)<=0)
        {
            printf("No\n");
            return 0;
        }
        else
        {
            a[temp]--;
        }
    }
    printf("Yes\n");
    return 0;
}
