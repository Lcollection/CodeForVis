#include <vector>

vector<int> e[N];
int q[N],vis[N],dis[N];
void bfs(int x)
{
	int head = 0,tail = 1;
	q[0] = x; vis[x] = 1;
	while(head != tail)
	{
		int u = q[head] ; head++;
		for(int i = 0;i < e[u].size() ;i++)
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


