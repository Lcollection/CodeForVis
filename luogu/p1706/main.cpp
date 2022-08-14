#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
bool vis[10] = {0};
int n,ans[110];
void print()
{
	for(int i=1;i<=n;i++) cout << "    " << ans[i];
	cout << endl;
}
void dfs(int x)
{
	if(x == n)
	{
		print();
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i] = 1;
			ans[x + 1] = i;
			dfs(x + 1);
			vis[i] = 0;
		}
	}
}
int main()
{
	cin >> n;
	dfs(0);
	return 0;
}
