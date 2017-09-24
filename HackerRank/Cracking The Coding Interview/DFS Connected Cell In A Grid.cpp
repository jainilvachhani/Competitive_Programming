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
#include <limits.h>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <math.h>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int count(vector <vector <int>> &a,int i,int j, int n, int m)
{
    int ans;
    if(i<0 || j<0 || i>n-1 || j>m-1)
    {
        return 0;
    }
    else if(a[i][j]==0)
    {
        return 0;
    }
    else
    {
        ans = 1;
        a[i][j] = 0;   
        ans+= count(a,i+1,j+1,n,m);
        ans+= count(a,i-1,j-1,n,m);
        ans+= count(a,i-1,j,n,m);
        ans+= count(a,i+1,j,n,m);
        ans+= count(a,i,j-1,n,m);
        ans+= count(a,i,j+1,n,m);
        ans+= count(a,i-1,j+1,n,m);
        ans+= count(a,i+1,j-1,n,m);
        return ans;
    }  
}

int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int i,j;
    vector <vector <int>> a(n, vector<int>(m));
    for(i=0;i<n;i++)
    {
        vector <int> row;
        for(j=0;j<m;j++)
        {
            int temp;
            cin>>temp;
            a[i][j] = temp;
        }
    }
    int maxi = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            maxi = max(maxi,count(a,i,j,n,m));
        }
    }
    printf("%d",maxi);
    return 0;
}
