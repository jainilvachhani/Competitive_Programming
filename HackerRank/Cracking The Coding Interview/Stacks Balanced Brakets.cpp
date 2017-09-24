#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        stack <char> a;
        char s[10001];
        scanf("%s",s);
        int i,check=1;   
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                a.push(s[i]);
            }
            else if(a.empty())
            {
                printf("NO\n");
                check = 0;
                break;
            }
            else if(s[i]==')' && a.top()=='(' && !(a.empty()))
            {
                a.pop();
            }
            else if(s[i]==']' && a.top()=='[' && !(a.empty()))
            {
                a.pop();
            }
            else if(s[i]=='}' && a.top()=='{' && !(a.empty()))
            {
                a.pop();
            }
            else
            {
                printf("NO\n");
                check = 0;
                break;
            }
        }
        if(a.empty() && check)
        {
            printf("YES\n");
        }
        else if(check)
        {
            printf("NO\n");
        }
    }
    return 0;
}
