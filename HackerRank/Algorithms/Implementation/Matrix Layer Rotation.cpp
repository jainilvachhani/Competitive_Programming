#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int r,c,n;
    scanf("%d",&r);
    scanf("%d",&c);
    scanf("%d",&n);
    int i,j,a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int rings = min(r,c)/2;
    for(i=0;i<rings;i++)
    {
        int rot = n%(2*(r+c - 4*i)-4);
        for(int x = 0; x < rot; x++)
        {
            for(j=i;j<c-i-1;j++)
            {
                swap(a[i][j],a[i][j+1]);
            }
            for(j=i;j<r-i-1;j++)
            {
                swap(a[j][c-i-1],a[j+1][c-i-1]);
            }
            for(j=c-i-1;j>i;j--)
            {
                swap(a[r-i-1][j],a[r-i-1][j-1]);
            }
            for(j=r-i-1;j>i+1;j--)
            {
                swap(a[j][i],a[j-1][i]);
            }    
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
