#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,time=1;
	int ans[100010];
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		int num;
		cin >> num;
		if(num%2 != 0 && num%3!=0 && num%5!=0)
		{
			ans[time] = num;
			time++;
		}
		if(num == 3 || num == 2 || num == 5)
		{
			ans[time] = num;
			time++;
		}

	}
	for(int i=1;i<time;i++)
	{
		cout << ans[i] << " ";
	}

	return 0;
}