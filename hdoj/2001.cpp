#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	double x1,y1,x2,y2;
	while(cin >> x1 >> y1 >> x2 >>y2)
	{
		double sum;
		sum = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
		printf("%.2lf\n",sqrt(sum));
	}

	return 0;
}