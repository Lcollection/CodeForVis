#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    for(int i=1;i<=n;i++)
    {
        string a; cin >> a;
        int len = a.length();
        int sum =0;
        for(int i=0;i<len;i++)
        {
            if(a[i] < 'A') sum++;
        }
        cout << sum <<endl;
    }
    return 0;
}
