#include <iostream>
using namespace std;
int main()
{
    int ans = 0,n;
    int a[1000000010];
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        a[i] = i ^ (i-1);
        //cout << ans;
        //cout << endl;
    }

    for(int i=1;i<=n;i++) ans += a[i];
    return 0;
}