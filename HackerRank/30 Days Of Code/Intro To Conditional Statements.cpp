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
using namespace std;


int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("Weird\n");
    }
    if(n%2==0 && n<=5 && n>=2)
    {
        printf("Not Weird\n");
    }
    if(n%2==0 && n>=6 && n<=20)
    {
        printf("Weird\n");
    }
    if(n%2==0 && n>20)
    {
        printf("Not Weird\n");
    }
    return 0;
}
