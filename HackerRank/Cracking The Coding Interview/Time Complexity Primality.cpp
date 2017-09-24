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
    int i,p,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&p);
        int sig = 1;
        if(p==1)
        {
            printf("Not prime\n");
            continue;
        }
        for(i=2;i<=sqrt(p);i++)
        {
            if(p%i==0)
            {
                printf("Not prime\n");
                sig = 0;
                break;
            }
        }
        if(sig)
        {
            printf("Prime\n");    
        }
           
    }
    
    return 0;
}
