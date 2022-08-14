#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    for(int i=1;i<=m;i++)
    {
        double x,y,z;
        cin >> x >> y >> z;
        if((x+y>z) && (y+z>x) && (x+z>y)) cout << "YES" <<endl;
        else cout << "NO"<<endl;
    }
    return 0;
}