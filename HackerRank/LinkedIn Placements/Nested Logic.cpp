#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int d1,d2,m1,m2,y1,y2;
    scanf("%d",&d1);
    scanf("%d",&m1);
    scanf("%d",&y1);
    scanf("%d",&d2);
    scanf("%d",&m2);
    scanf("%d",&y2);
    if(y1<y2 || (y2==y1 && m1<m2) || (y2==y1 && m2==m1 && d1<=d2))
    {
        printf("0");
    }
    else if(y1>y2)
    {
        printf("10000");
    }
    else if(y1==y2 && m1>m2)
    {
        int ans = 500*abs(m1-m2);
        printf("%d",ans);
    }
    else if(y1==y2 && m1==m2 && d1>d2)
    {
        int ans = 15*abs(d1-d2);
        printf("%d",ans);
    }
    return 0;
}
