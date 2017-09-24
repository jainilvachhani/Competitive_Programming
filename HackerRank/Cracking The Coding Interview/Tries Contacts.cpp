#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() 
{
	map <string,int> a;
	int q;
	scanf("%d",&q);
	while(q--)
	{
		string s1,s2;
		cin>>s1;
		cin>>s2;
		if(s1[0]=='a')
		{
			string temp;
			for(int i=0;i<s2.size();i++)
			{
				temp.append(s2.begin()+i,s2.begin()+i+1);
				if(a.count(temp)>0)
				{
					a[temp]++;
				}
				else
				{
					a[temp] = 1;
				}
			}
			
		}
		if(s1[0]=='f')
		{
			printf("%d\n",a[s2]);
		}
	}
	return 0;
}