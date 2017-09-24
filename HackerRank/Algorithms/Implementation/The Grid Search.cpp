#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r1,c1,r2,c2,i,j;
        scanf("%d",&r1);
        scanf("%d",&c1);
        vector <string> g(r1);
        for(i=0;i<r1;i++)
        {
            cin>>g[i];
        }
        scanf("%d",&r2);
        scanf("%d",&c2);
        vector <string> p(r2);
        for(i=0;i<r2;i++)
        {
            cin>>p[i];
        }
        bool f = false;
        for(i=0;i<=(r1-r2);i++)
        {
            for(j=0;j<=(c1-c2);j++)
            {
                if(g[i][j] == p[0][0])
                {
                    int l;
                    bool wrong = false;
                    for(l=0;l<r2;l++)
                    {
                        if(p[l]!=g[l+i].substr(j,c2))
                        {
                            wrong = true;
                            break;
                        }
                    }
                    if(!wrong)
                    {
                        f = true;
                        break;
                    }
                }
            }
            if(f)
            {
                break;
            }
        }
        if(f)
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
