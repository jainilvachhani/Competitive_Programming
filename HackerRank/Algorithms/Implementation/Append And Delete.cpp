#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;


int main() 
{
    char s[101],t[101];
    int k;
    scanf("%s",s);
    scanf("%s",t);
    scanf("%d",&k);
    int i,len=0;
    for(i=0;i<strlen(s)&&i<strlen(t);i++)
    {
        if(s[i]==t[i])
        {
            len++;
        }
        else
        {
            break;
        }
    }
    int d = strlen(s) + strlen(t) - 2*len;
    if(d<=k && d%2==0 && k%2==0)
    {
        printf("Yes");
    }
    else if(d<=k && d%2!=0 && k%2!=0)
    {
        printf("Yes");
    }
    else if(strlen(s) + strlen(t) < k)
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
    return 0;
    
}
