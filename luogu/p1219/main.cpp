#include <iostream>
using namespace std;
int n,hang;
int ans[110];
void dfs(int x)
{
	if(x > n)
	{
		print();
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!visa[i] && !visb[i+x] && !visc[x-i+n])
		{
			visa[i] = 1;
			visb[i] = 1;
			visc[i] = 1;
			ans[x+1] = i;
			dfs(x+1);
			visa[i] = 0;
			visb[i+x] = 0;
			visc[i] = 0;
		}
	}
}
int main()
{
	cin >> n;
	dfs(1);
	return 0;
}
