#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    while(scanf("%d%d",&l,&r)!=EOF)
    {
        int ans1=0,ans2=0;
        for(int i=l;i<=r;i++)
        {
            if(i%2==0) ans1+=i*i;
            else ans2+=(i*i*i);
        }
        cout << ans1 << " " <<ans2<<endl;
    }
    return 0;
}