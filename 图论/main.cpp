#include <iostream>
#include <vector>
using namespace std;
const int N = 100010;
vector <int> e[N];
int main()
{
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		int u,v;
		cin >> u >> v;
		e[u].push_back(v);
		e[v].push_back(u);
	}
	return 0;
}//图的链表存储

void bfs(int x)
{
	int head = 0, tail = 1;
	q[0] = x ; vis[x] = 1;
	while(head != tail)
	{
		int u = q[head]; head++;
		for(int i=0;i<e.size();i++)
		{
			int v = e[u][i];
			if(!vis[v])
			{
				dis[v] = dis[u] + 1;
				q[tail++] = v;
				vis[v] = 1;
			}
		}

	}
}

void dfs(int x)
{
	vis[x] = 1;
	for(int i=0;i<e[x].size();i++)
	{
		if(!vis[e[x][i]]) 
			dfs(e[x][i]);
	}
}//深搜不是用于求解最短路

vector <int> e[N] , w[N];
int q[N],dis[N];
bool inq[N];
void spfa(int s)
{
	memset(dis,127,sizeof(dis));
	int head =0 ,tail =1;
	q[0] = s;dis[s] = 0;inq[s] =1;
	while(head != tail)
	{
		int u= q[head];head++;
		if(head == v)
		{

		}
	}
}















