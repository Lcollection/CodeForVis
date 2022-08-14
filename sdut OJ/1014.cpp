#include <iostream>
using namespace std;
int main()
{
	int ans,n,a;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		while(cin >> a)
		{
			ans += a;
		}
		cout << ans;
		ans = 0;
	}
		

	return 0;
}