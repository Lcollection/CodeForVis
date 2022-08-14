#include <bits/stdc++.h>
using namespace std;
struct bag
{
    int m,v;
    double p;
}a[110];
bool cmp(const bag &a , const bag &b)
{
    return a.m * b.v < a.v * b.m;
}
int main()
{
    int n,t; cin >> n >> t ;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i].m >> a[i].v;
        a[i].p = a[i].v / a[i].m;
    }
    sort(a+1,a+1+n,cmp);
    double ans = 0.0;
    int i;
    for(i=1;i<=n;i++)
    {
        if(a[i].m <= t)
        {
            ans += a[i].v;
            t -= a[i].m;
        }
        else
        {
            ans+=a[i].v*t*1.0/(a[i].m*1.0);
            break;
        }
    }
    printf("%.2lf",ans);
    return 0;
}