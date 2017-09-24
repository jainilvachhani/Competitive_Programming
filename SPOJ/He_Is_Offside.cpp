#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a,d;
	while(1)
	{
	    scanf("%d",&a);
	    scanf("%d",&d);
	    if(a==0 && d==0)
	    {
	        return 0;    
	    }
	    else
	    {
	        int att[a],def[d],i;
	        for(i=0;i<a;i++)
	        {
	            scanf("%d",&att[i]);
	        }
	        for(i=0;i<d;i++)
	        {
	            scanf("%d",&def[i]);
	        }
	        sort(att,att+a);
	        sort(def,def+d);
	        if(att[0]<def[1])
	        {
	            printf("Y\n");
	        }
	        else
	        {
	            printf("N\n");
	        }
	    }  
	}
	
}