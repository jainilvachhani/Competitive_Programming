#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    scanf("%d",&n);
    int i,j;
    string a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1])
            {
                a[i][j] = 'X';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
