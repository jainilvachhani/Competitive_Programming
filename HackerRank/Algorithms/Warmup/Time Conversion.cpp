include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    char a[10],i;
    scanf("%s",a);
    if(a[8]=='P')
    {
        int x = (a[0] - '0')*10;
        x+= (a[1]-'0');
        x = x+12;
        if(x==24)
        {
            x = 12;
            printf("%d",x);
        
        }
        else if(x<10)
        {
            printf("0");
            printf("%d",x);    
        }
        else
        {
            printf("%d",x);    
        }
        for(i=2;i<8;i++)
        {
            printf("%c",a[i]);
        }
    }
    else
    {
        int x = (a[0] - '0')*10;
        x+= (a[1]-'0');
        if(x==12)
        {
            x = 0;
            printf("%d",x);
            printf("%d",x);
        
        }
        else if(x<10)
        {
            printf("0");
            printf("%d",x);    
        }
        else
        {
            printf("%d",x);    
        }
        for(i=2;i<8;i++)
        {
            printf("%c",a[i]);
        }    
    }
    return 0;
}