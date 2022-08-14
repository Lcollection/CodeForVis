#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
double dis(double a,double b,double c,double d)
{
	return sqrt(abs((a-c)*(a-c)) +abs( (b-d)*(b-d)));
}
int main()
{
	double x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
	double dis1 = dis(x1,y1,x2,y2) ,dis2=dis(x1,y1,x3,y3),dis3=dis(x2,y2,x3,y3);
	double ans;
	ans = dis1 + dis2 + dis3 ;
	printf("%.2f",ans);
	return 0;
}
