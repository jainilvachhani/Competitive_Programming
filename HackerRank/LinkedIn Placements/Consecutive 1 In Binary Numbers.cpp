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
    int n,i=0;
    scanf("%d",&n);
    vector <int> a;
    while(n)
    {
        int temp = n%2;
        n = n/2;
        a.push_back(temp);
    }
    int sum=0,max = 0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==0)
        {
            sum = 0;
        }
        else 
        {
            sum++;
        }
        if(sum>max)
        {
            max = sum;
        }
    }
    printf("%d",max);
    return 0;
}
