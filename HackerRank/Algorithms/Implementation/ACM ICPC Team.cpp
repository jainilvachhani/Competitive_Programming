#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

int cal(string s, string t, int m)
{
    int i,cnt = 0;
    for(i=0;i<m;i++)
    {
        if(s.at(i)=='1' or t.at(i)=='1')
        {
            cnt++;
        }
    }
    return cnt;
}

int main() 
{   
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    string s[500] = {};
    int i,j,k;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int max = 0, teams = 0;
     
    for (i=0;i<n-1;i++) 
    {
        for (j=i+1;j<n;j++) 
        {
            int cnt = cal(s[i], s[j], m);
            if (cnt > max)
            {
                max = cnt;
                teams = 1;
            } 
            else if (cnt == max)
            {
                teams += 1;
            }
        }
    }
    printf("%d\n%d",max,teams);
    return 0;
}
