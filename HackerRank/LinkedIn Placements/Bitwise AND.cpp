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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d",&n);
        scanf("%d",&k);
        int i,ans,max=0,j;
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                ans = i&(j);
                if(ans >= max && ans<k)
                {
                    max = ans;
                }    
            }
            
        }
        printf("%d\n",min(max,k-1));
    }
    return 0;
}
