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
        char a[10001];
        scanf("%s",a);
        int i;
        for(i=0;i<strlen(a);i+=2)
        {
            printf("%c",a[i]);
        }
        printf(" ");
        for(i=1;i<strlen(a);i+=2)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
