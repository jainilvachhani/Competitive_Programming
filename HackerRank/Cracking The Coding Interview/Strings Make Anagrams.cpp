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
#include <string.h>

using namespace std;


int main()
{
    char a[10001],b[10001];
    scanf("%s",a);
    scanf("%s",b);
    int i,aa[26],bb[26];
    for(i=0;i<26;i++)
    {
        aa[i] = 0;
        bb[i] = 0;
    }
    for(i=0;i<strlen(a);i++)
    {
        aa[a[i]-97]++;
    }
    for(i=0;i<strlen(b);i++)
    {
        bb[b[i]-97]++;
    }
    int ans = 0;
    for(i=0;i<26;i++)
    {
        ans = ans + abs(aa[i] - bb[i]);
    }
    printf("%d\n",ans);
    return 0;
}
