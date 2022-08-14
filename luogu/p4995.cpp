#include <bits/stdc++.h>
using namespace std;
int a[310];
int main()
{
    int n; cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+1+n);
    long long ans = 0;
    int tail = 0,head = n;
    while(tail < head)
    {
        ans += pow((a[head]-a[tail]), 2);
        tail++;
        ans += pow((a[tail]-a[head]),2);
        head--;
    }
    cout << ans;
    return 0;
}