#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


int main() 
{
    int a[26],i;
    for(i=0;i<26;i++)
    {
        scanf("%d",&a[i]);
    }
    char b[11];
    scanf("%s",b);
    int max = -1;
    for(i=0;i<strlen(b);i++)
    {
        if(a[b[i]-97]>max)
        {
            max = a[b[i]-97];
        }
    }
    printf("%d",max*strlen(b));
    return 0;
}
