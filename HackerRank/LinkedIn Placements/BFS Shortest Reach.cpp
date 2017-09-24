#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

void bfs(vector <list<int>> adjlist, int source, int visited[], int distance[],int n)
{
	distance[source] = 0;
	visited[source] = 1;
	queue <int> bfsq;
	bfsq.push(source);
	while(!bfsq.empty())
	{
		int u = bfsq.front();
		bfsq.pop();
		for(int v : adjlist[u])
		{
			if(visited[v]==0)
			{
				visited[v] = 1;
				distance[v] = distance[u] + 6;
				bfsq.push(v);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i!=source)
		{
			printf("%d ",distance[i]);
		}
	}
	printf("\n");
}

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d",&n);
		scanf("%d",&m);
		vector <list<int>> adjlist(n);
		int i;
		for(i=0;i<m;i++)
		{
			int a,b;
			scanf("%d",&a);
			scanf("%d",&b);
			a--;
			b--;
			adjlist[a].push_back(b);
			adjlist[b].push_back(a);
		}
		int target;
		int visited[n];
		int distance[n];
		scanf("%d",&target);
		target--;
		for(i=0;i<n;i++)
		{
			visited[i] = 0;
		}
		for(i=0;i<n;i++)
		{
			distance[i] = -1;
		}
		bfs(adjlist, target,visited, distance,n);
	}
	return 0;
}