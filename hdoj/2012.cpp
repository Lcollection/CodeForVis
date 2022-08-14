#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    int n = x*x+x+41;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        if(x==0 && y ==0) break;
        bool flag = 0;
        for(int i=x;i<=y;i++)
        {
            if(!check(i))
            {
                cout << "Sorry" << endl;
                flag = 1;
                break;
            }
        }
        if(!flag) cout << "OK" << endl;
    }
    return 0;
}
