#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;double ans;
    while(scanf("%d",&n)!=EOF)
    {
        ans =0.0;
        int minn=1e9,maxx=0;
        for(int i=1;i<=n;i++)
        {
            int x; cin >> x;
            minn = min(minn,x);
            maxx = max(maxx,x);
            ans += x;
            //cout << ans <<endl;
        }
        double ans2=(ans-minn-maxx)/(n-2);
        
        printf("%.2lf\n" ,ans2);
    }
    return 0;
}