#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int i;int k=0;int sum=0;
        for(i=1;i<=n/m;i++)
        {
            for(int j=1;j<=m;j++)
            {
                k+=2;
                sum+=k;
            }
            if(i==n/m) cout << sum/m;
            else cout << sum/m << " ";
            sum = 0;
        }
        if(n%m)
        {
            sum = 0;
            for(i=1;i<=n%m;i++)
            {
                k+=2;
                sum+=k;
            }
            cout << " " << sum/(i-1);
        }
        cout << endl;
    }
    return 0;
}