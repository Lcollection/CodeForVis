#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int mod = 1e9 + 7;
int main()
{
    int a=0,n,k,ans = 0;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        int l = pow(10,i);
       // cout << l << endl;
        a += l*6;
    }

    //cout << a << endl;
    for(int i=k;i<=a;i++)
    {
        //cout << "i is " << i <<endl;
        if(i%k == 0) ans++;
    }

    cout << ans % mod;
    return 0;
}