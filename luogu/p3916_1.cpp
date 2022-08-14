#include <bits/stdc++.h>
using namespace std;
#define maxl 100010
int n,m,a[maxl];
vector<int> G[maxl];

void dfs(int x,int d)
{
	if(a[x]) return;
	a[x] = d;
	for(int i=0;i<G[x].size();i++)
		dfs(G[x][i],d);
}
int main()
{
	int u,v;
	cin >> n >> m;
	for(int i=1;i<=m;i++)
	{
		cin >> u >> v;
		G[v].push_back(u);
	}
	for(int i=n;i;i--) dfs(i,i);
	for(int i=1;i<=n;i++) cout << a[i] << " ";
	cout << endl;
	return 0;
}