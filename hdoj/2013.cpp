#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int ans=1;
        for(int i=1;i<n;i++)
        {
            ans=(ans+1)*2;
        }
        cout << ans << endl;
    }
    return 0;
}