#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
double s;
void js(int x)
{
	if(x >= 90) 
	{
		cout << "4.0";
	}
	if(x >= 60 && x <= 89)
	{
		int a = 90 - x;
		s = 4.0 - a * 0.1;
		printf("%.1lf", s);
	}
}
int main()
{
	int x;
	
	cin >> x;
	js(x);
	if(x < 60)
	{
		x = sqrt(x) * 10;
		if(x < 60) cout << "0.0";
		else js(x);
	}
	return 0;
}