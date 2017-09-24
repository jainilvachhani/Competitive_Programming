#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int i,n;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    sort(b,b+n);
    if(n<2)
    {
        printf("yes\n");
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            break;
        }
    }
    if(i==n)
    {   
        printf("yes");
        return 0;
    }
    int fir,sec,third;
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            fir = i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]!=b[i])
        {
            sec = i;
            break;
        }
    }
    {
        int temp = a[fir];
        a[fir] = a[sec];
        a[sec] = temp;
        int same = 1;
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                same = 0;
                break;
            }
        }
        if(same)
        {
            printf("yes\n");
            printf("swap %d %d",fir+1,sec+1);
            return 0;
        } 
    }
    int temp = a[fir];
    a[fir] = a[sec];
    a[sec] = temp;
    reverse(a+fir,a+sec+1);
    
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            printf("no");
            return 0;
        }
    }
    
        printf("yes\n");
        printf("reverse ");
        printf("%d %d\n",fir+1,sec+1);
    
    return 0;
}
