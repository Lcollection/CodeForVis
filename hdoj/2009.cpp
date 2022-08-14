#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;int m;
    while(scanf("%lf %d",&n,&m)!=EOF)
    {
        double ans=n;
        for(int i=2;i<=m;i++)
        {
            ans+=sqrt(n);
            n=sqrt(n);
        }
        printf("%.2lf\n",ans);
    }
    return 0;
}