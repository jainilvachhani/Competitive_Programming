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
    int n;
    scanf("%d",&n);
    vector<int> a(n);
    int i;
    int ans = 0;
    for(i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        a.push_back(temp);
        ans = ans ^ temp;
    }
    printf("%d\n",ans);
    return 0;
}
