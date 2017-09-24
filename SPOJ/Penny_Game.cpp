#include <iostream>
#include <string.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int n;
        scanf("%d",&n);
        char a[40];
        int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0;
        scanf("%s",a);
        int i,len=strlen(a);
        
        for(i=0;i<38;i++)
        {
            if(a[i]=='T' && a[i+1]=='T' && a[i+2]=='T')
            {
                one++;
            }
            else if(a[i]=='T' && a[i+1]=='T' && a[i+2]=='H')
            {
                two++;
            }
            else if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='T')
            {
                three++;
            }
            else if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='H')
            {
                four++;
            }
            else if(a[i]=='H' && a[i+1]=='T' && a[i+2]=='T')
            {
                five++;
            }
            else if(a[i]=='H' && a[i+1]=='T' && a[i+2]=='H')
            {
                six++;
            }
            else if(a[i]=='H' && a[i+1]=='H' && a[i+2]=='T')
            {
                seven++;
            }
            else if(a[i]=='H' && a[i+1]=='H' && a[i+2]=='H')
            {
                eight++;
            }
        }
         printf("%d %d %d %d %d %d %d %d %d\n",n,one,two, three,four,five,six,seven,eight);
    }
    return 0;
}