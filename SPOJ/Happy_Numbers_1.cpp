#include <iostream>
#include <set>
int cnt = 0;
using namespace std;
int getsquares(int n)
{
    cnt++;
    int ans = 0,temp;
    while(1)
    {
        if(n==0)
        {
            return ans;
        }
        else
        {
            temp = n%10;
            ans += temp*temp;
            n = n / 10;
        }
    }
}

int main()
{
    int n;
    set <int> st;
    scanf("%d",&n);
    while(1)
    {
        n = getsquares(n);
        if(n==1)
        {
            printf("%d",cnt);
            return 0;
        }
        else
        {   
            if(st.find(n) != st.end())
            {
                printf("-1");
                return 0;
            }
            else
            {
                st.insert(n);
            }
    }
        
    }
    
}