#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        long long ans=1;
        for(int i=1;i<=n;i++)
        {
            int x; cin >> x;
            if(x%2 != 0) ans *= x;
        }
        cout << ans <<endl;
    }
    return 0;
}