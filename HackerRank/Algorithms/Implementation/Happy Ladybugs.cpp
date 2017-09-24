#include <cmath>
#include <string.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check(char s[], int n)
{
    int a[26],i;
    for(i=0;i<26;i++)
    {
        a[i]=0;
    }
    int un=0;
    for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='_')
            {
                un++;
            }
            else
            {
                a[s[i]-65]++;
            }
        }
        int pos;
        for(i=0;i<26;i++)
        {
            if(a[i]==1)
            {
                return 0;
            }
        }
        for(i=0;i<strlen(s);i++)
        {
            if((s[i]==s[i+1]&&i+1!=n) || (s[i]==s[i-1] && i-1 !=-1))
            {

            }
            else
            {
                break;
            }
        }
        if(i==n)
        {
            return 1;
        }
        if(un>=1)
        {
            return 1;
        }
        return 0;
}

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        if(check(s,n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
    return 0;
}
