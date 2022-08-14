#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;int a[110];
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        int flag,minn=1e9+7;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            if(a[i] < minn)
            {
                minn = a[i];
                flag = i;
            }
        }
        
        swap(a[1],a[flag]);


        cout << a[1];
        for(int i=2;i<=n;i++)
        {
            cout << " " << a[i];
        }
        cout << endl;
    }
    return 0;
}