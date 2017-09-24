#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

int bfs1(vector <list<int>> adjlist, int target, int source, int visited[], int distance[], int n)
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
				distance[v] = distance[u] + 1;
				bfsq.push(v);
			}
		}
	}
	int max = 0,i,node = 1;
	for(i=1;i<n+1;i++)
	{
		if(distance[i]> max)
		{
			max = distance[i];
			node = i;
		}
	}
	return node;
}


int bfs2(vector <list<int>> adjlist, int target, int source, int visited[], int distance[], int n)
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
				distance[v] = distance[u] + 1;
				bfsq.push(v);
			}
		}
	}
	int max = 0,i,node = 1;
	for(i=1;i<n+1;i++)
	{
		if(distance[i]> max)
		{
			max = distance[i];
			node = i;
		}
	}
	return max;
}

int main() {
	int n,m;
	scanf("%d",&n);
	m = n-1;
	vector <list<int>> adjlist(n+1);
	int i;
	for(i=0;i<m;i++)
	{
		int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		adjlist[a].push_back(b);
		adjlist[b].push_back(a);
	}
	int visited[n+1];
	for(i=0;i<=n;i++)
	{
		visited[i] = 0;
	}
	int distance[n+1];
	for(i=0;i<=n;i++)
	{
		distance[i] = -1;
	}
	int x = bfs1(adjlist, n, 1,visited, distance,n);
	for(i=0;i<=n;i++)
	{
		visited[i] = 0;
	}
	for(i=0;i<=n;i++)
	{
		distance[i] = -1;
	}
	int y = bfs2(adjlist, n, x,visited, distance,n);
	printf("%d\n",y);
	return 0;
}
