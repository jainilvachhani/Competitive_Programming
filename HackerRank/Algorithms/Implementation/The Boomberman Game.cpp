#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int r,c,n;
    scanf("%d",&r);
    scanf("%d",&c);
    scanf("%d",&n);
    char temp;
    int i,j,a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>temp;
            if(temp=='.')
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = 3;
            }
        }
    }
    if(n%2==0)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<"O";
            }
            printf("\n");
        }
        return 0;
    }
    else if(n==1)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]==3)
                {
                    cout<<"O";
                }
                else
                {
                    cout<<".";;
                }
            }
            printf("\n");
        }
        return 0;
    }
    else
    {
        n = n%4;
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    if(a[i][j]==3)
                    {
                        a[i][j] = 1;
                    }
                    else
                    {
                        a[i][j] = 3;
                    }
                }
            }
            
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    if(a[i][j]!=1)
                    {
                        a[i][j] = 2;
                    }
                }
            }
            
            
            
            
            
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    if(a[i][j]==1)
                    {
                        a[i][j]=0;
                        if(i+1<=r-1 && a[i+1][j]!=1)
                        {
                            a[i+1][j]=0;
                        }
                        if(j+1<=c-1 && a[i][j+1]!=1)
                        {
                            a[i][j+1]=0;
                        }
                        if(i-1>=0 && a[i-1][j]!=1)
                        {
                            a[i-1][j]=0;
                        }
                        if(j-1>=0 && a[i][j-1]!=1)
                        {
                            a[i][j-1]=0;
                        }
                    }
                    
                }
            }
            
            if(n==3)
            {
                for(i=0;i<r;i++)
                {
                    for(j=0;j<c;j++)
                    {
                        if(a[i][j]>0)
                        {
                            cout<<"O";
                        }
                        else
                        {
                            cout<<".";
                        }
                    }
                    printf("\n");
                }
                return 0;
            }
            
            if(n==1)
            {
                for(i=0;i<r;i++)
                {
                    for(j=0;j<c;j++)
                    {
                            
                        if(a[i][j]==0)
                        {
                            a[i][j] = 2;
                        }
                        else if(a[i][j]==2)
                        {
                            a[i][j]=-1;
                            if(i+1<=r-1 && a[i+1][j]!=2)
                            {
                                a[i+1][j]=-1;
                            }
                            if(j+1<=c-1 && a[i][j+1]!=2)
                            {
                                a[i][j+1]=-1;
                            }
                            if(i-1>=0)
                            {
                                a[i-1][j]=-1;
                            }
                            if(j-1>=0)
                            {
                                a[i][j-1]=-1;
                            }
                        }
                    }
                }
                for(i=0;i<r;i++)
                {
                    for(j=0;j<c;j++)
                    {
                        if(a[i][j]==-1)
                        {
                            a[i][j] = 0;
                        }
                    }
                }
                for(i=0;i<r;i++)
                {
                    for(j=0;j<c;j++)
                    {
                        if(a[i][j]>0)
                        {
                            cout<<"O";
                        }
                        else
                        {
                            cout<<".";
                        }
                    }
                    printf("\n");
                }
            }
            
        }
    }
    return 0;
}
