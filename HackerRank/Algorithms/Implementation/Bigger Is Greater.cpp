#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j;
        char a[101];
        scanf("%s",a);
        i = strlen(a)-1;
        while(i>0 && a[i-1]>=a[i])
        {
            i--;
        }
        if(i==0)
        {
            printf("no answer\n");
        }
        else
        {
            j = strlen(a)-1;
            while(a[j]<=a[i-1])
            {
                j--;
            }
            swap(a[i-1],a[j]);
            j = strlen(a)-1;
            while(i<j)
            {
                swap(a[i],a[j]);
                i++;
                j--;   
            }
            cout<<a<<endl;
        }
    }
    return 0;
}
