    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    #include <map>
    using namespace std;


    int main() 
    {
        int n;
        scanf("%d",&n);
        map <string,long long int> a;
        char s[1000];
        long long int t,i;
        for(i=0;i<n;i++)
        {
            scanf("%s",s);
            scanf("%lld",&t);
            a[s] = t;
        }
        char x[1000];
        while(scanf("%s" , x) != EOF)
        {
            if(a.count(x)>0)
            {
                printf("%s=%lld\n",x,a[x]);
            }
            else
            {
                printf("Not found\n");
            }
        }
        return 0;
    }
