#include <bits/stdc++.h>
const double PI=3.1415927;
using namespace std;
int main()
{
    double r;
    while(scanf("%lf",&r)!=EOF)
    {
        double ans = r*r*r*PI*4/3;//不能先计算4/3会导致丢失精度
        printf("%.3lf\n",ans);
    }
    return 0;
}