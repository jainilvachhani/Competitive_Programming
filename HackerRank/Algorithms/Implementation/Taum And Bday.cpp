#include<stdio.h>
int main()
{
    long int t,j;
    scanf("%ld",&t);
    for(j=0;j<t;j++)
    {
        long int b,w;
        scanf("%ld",&b);
        scanf("%ld",&w);
        long int pb,pw,con;
        scanf("%ld",&pb);
        scanf("%ld",&pw);
        scanf("%ld",&con);
        long int price;
        if(pw > (pb + con))
        {
            price = b*pb + w*(pb + con);
        }
        if(pb > (pw + con))
        {
            price = w*pw + b*(pw + con);
        }
        if(pb <= (pw + con) && pw <= (pb + con))
        {
            price = b*pb + w*pw;
        }
    printf("%ld\n",price);
}
return 0;}
