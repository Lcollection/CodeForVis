#include <bits/stdc++.h>
using namespace std;
const int manx = 100010;
int a[manx];
bool cmp(int a,int b)
{
    return a < b;
}
int main()
{
    int n;cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+1+n,cmp);
    //for(int i=1;i<=n;i++) cout << a[i] << " ";
    //cout << endl;
    int ans = 200000,sum=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]-1 == a[i-1]) sum++;
        else 
        {
            ans = min(ans,sum);
            sum = 1;
        }
    }

    cout << ans;

    return 0;
}