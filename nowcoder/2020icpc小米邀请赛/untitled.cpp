#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
int dp[2010][2010];
int main()
{
	int n,m;
	while(cin >> n >>m)
	{
		for(int i=0;i<=n+m;i++)
		{
			for(int j=0;j<=n+m;j++)
			{
				dp[i][j] = 0;
			}
		}
		dp[0][0] = 1;
		for(int i=0;i<=n+m;i++)
		{
			for(int j=0;j<=n+m;j++)
			{
				if(i<n || (i-n) < min(j,m))
				{
					dp[i+1][j] += dp[i][j];
					dp[i+1][j] %= mod;
				}
				if(j<m || (j-m)< min(i,n))
				{
					dp[i][j+1] += dp[i][j];
					dp[i][j+1] %= mod;
				}
			}
		}

		cout << dp[n+m][n+m] << endl;


	}
	return 0;
}