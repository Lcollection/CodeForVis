#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n,dan=0,shu=0;
        cin >> n;
        for(int j=1;j<=n;j++)
        {  
            int x; cin >> x;
            if(x == 1) dan++;
            if(x == 2) shu++;
        }
        if(dan % 2 == 0 && shu % 2 == 0 || dan == shu*2)  cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}