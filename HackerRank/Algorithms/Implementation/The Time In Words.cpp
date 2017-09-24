#include <cmath>
#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int h,m;
    scanf("%d",&h);
    scanf("%d",&m);
    map<int ,std::string> aa;
    aa[1] = "one";
    aa[2] = "two";
    aa[3] = "three";
    aa[4] = "four";
    aa[5] = "five";
    aa[6] = "six";
    aa[7] = "seven";
    aa[8] = "eight";
    aa[9] = "nine";
    aa[10] = "ten";
    aa[11] = "eleven";
    aa[12] = "twelve";
    aa[13] = "thirteen";
    aa[14] = "fourteen";
    aa[15] = "fifteen";
    aa[16] = "sixteen";
    aa[17] = "seventeen";
    aa[18] = "eighteen";
    aa[19] = "nineteen";
    aa[20] = "twenty";
    aa[21] = "twenty one";
    aa[22] = "twenty two";
    aa[23] = "twenty three";
    aa[24] = "twenty four";
    aa[25] = "twenty five";
    aa[26] = "twenty six";
    aa[27] = "twenty seven";
    aa[28] = "twenty eigth";
    aa[29] = "twenty nine";
    aa[30] = "thrity";
    
    if(m==0)
    {
        cout<<aa[h];
        printf(" o' clock\n");
    }
    else if(m==1)
    {
        cout<<aa[m];
        printf(" minute past ");
        cout<<aa[h];
    }
    else if(m==15)
    {
        printf("quarter past ");
        cout<<aa[h];
    }
    else if(m<30)
    {
        cout<<aa[m];
        printf(" minutes past ");
        cout<<aa[h];
    }
    else if(m==30)
    {
        printf("half past ");
        cout<<aa[h];
    }
    else if(m>30 && m!=45)
    {
        m = 60-m;
        cout<<aa[m];
        printf(" minutes to ");
        cout<<aa[h+1];
    }
    else if(m==45)
    {
        printf("quarter to ");
        cout<<aa[h+1];
    }
    return 0;
}
