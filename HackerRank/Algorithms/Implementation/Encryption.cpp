#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int r,c;
    string s;
    cin>>s;
    r = floor(sqrt(s.size()));
    c = ceil(sqrt(s.size()));
    int i,j;
    for(i=0;i<c;i++)
    {
        for(j=0;i+j<s.size();j=j+c)
        {
            cout<<s[i+j];
        }
        cout<<" ";
    }
    return 0;
}
