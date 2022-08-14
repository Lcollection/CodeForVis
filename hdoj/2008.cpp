#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        int ans1=0,ans2=0,ans3=0;
        for(int i=1;i<=n;i++)
        {
            double a; cin >> a;
            if(a > 0) ans3++;
            if(a == 0) ans2++;
            if(a < 0) ans1++;
        }
        cout << ans1 << " " << ans2 << " "<< ans3 <<endl;
    }
    return 0;
}