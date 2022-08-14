#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long l[1010],r[1010],sum[1010];
    long long n,kl,kr,ans=0;
    cin >> n;
    cin >> kl >> kr;
    for(int i=1;i<=n;i++)
    {
        cin >> l[i] >> r[i];
    }

    for(long long i = 1 ;i<=n;i++)
    {
        for(long long j=1 ;j<=i;j++)
        {
            if(l[i]*r[i] < l[j]*r[j])
            {
                swap(l[i],l[j]);
                swap(r[i],r[j]);
            }
        }
    }

    for(int i=1 ;i<=n;i++)
    {
        sum[i] = kl;
        for(int j=1;j<i;j++)
        {
            sum[i] *= l[j];
        }
        sum[i]/=r[i];
    }

    for(int i=1;i<=n;i++)
    {
        ans = max(sum[i],ans);
    }

    cout << ans;


    return 0;
}